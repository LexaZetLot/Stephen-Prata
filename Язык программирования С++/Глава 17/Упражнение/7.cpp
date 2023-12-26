#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Store
{
private:
    std::ostream* fp;
public:
    Store() { fp = NULL; }
    Store(std::ofstream& of) { fp = &of; }
    ~Store() {}

    Store& operator() (const std::string& str);
};


void ShowStr(const std::string& str);
void GetStrs(std::ifstream& fp, std::vector<std::string>& arr_str);

int main(void)
{
    using namespace std;

    vector<string> vostr;
    string temp;

    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
    {
        vostr.push_back(temp);
    }
    cout << "Here is your input:\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Couldn't open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere're the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);
    return 0;
}


void ShowStr(const std::string& str)
{
    std::cout << str << '\n';
}

Store& Store::operator() (const std::string& str)
{
    int size = str.size();
    fp->write((char*)&size, sizeof(int));
    fp->write(str.data(), size);
    return *this;
}

void GetStrs(std::ifstream& fp, std::vector<std::string>& arr_str)
{
    int size = 0;
    std::string str;
    char ch;

    while (fp.peek() && !fp.eof())
    {
        fp.read((char*)&size, sizeof(int));
        for (int i = 0; i < size; i++)
        {
            fp.read(&ch, sizeof(char));
            str.push_back(ch);
        }
        arr_str.push_back(str);
        str.clear();
    }
}