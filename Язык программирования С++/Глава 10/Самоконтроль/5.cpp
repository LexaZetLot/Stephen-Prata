#include <string>
class Banck
{
private:
	std::string name;
	std::string name_num;
	int num;
public:
	void cret(const std::string str1, const std::string str2, int n);
	void show() const;
	void add(int n);
	void pwd(int n);
};

int main(void)
{
	return 0;
}