#include <string>
class Banck
{
private:
	std::string name;
	std::string name_num;
	int num;
public:
	Banck(std::string str1, std::string str2, int n);
	void cret(std::string str1, std::string str2, int n);
	void show() const;
	void add(int n);
	void pwd(int n);
};
Banck::Banck(std::string str1, std::string str2, int n)
{
	name = str1;
	name_num = str2;
	num = n;
}
int main(void)
{
	return 0;
}