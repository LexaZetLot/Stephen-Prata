#include <iostream>
#include <string>
#include <algorithm>
#include <list>

void outint(std::string n) { std::cout << n << " "; }

int main(void)
{
	std::list <std::string> list_mat;
	std::list <std::string> list_pat;
	std::list <std::string> list_result;
	std::string str_buf;

	std::cout << "Mat" << std::endl;
	while (std::cin >> str_buf && str_buf != "quit")
		list_mat.push_back(str_buf);
	std::cout << "Pat" << std::endl;
	while (std::cin >> str_buf && str_buf != "quit")
		list_pat.push_back(str_buf);

	list_result.splice(list_result.begin(), list_mat);
	list_result.splice(list_result.end(), list_pat);

	list_result.sort();
	std::list <std::string>::iterator pt = std::unique(list_result.begin(), list_result.end());

	std::for_each(list_result.begin(), pt, outint);

	return 0;
}