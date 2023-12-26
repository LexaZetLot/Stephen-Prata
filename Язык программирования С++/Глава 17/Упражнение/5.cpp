#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <list>

std::ofstream fp_0("matnpat.dat");
void outint(std::string n) { fp_0 << n << '\n'; }

int main(void)
{
	std::ifstream fp_i1("mat.dat");
	std::ifstream fp_i2("pat.dat");
	std::list <std::string> list_mat;
	std::list <std::string> list_pat;
	std::list <std::string> list_result;
	std::string str_buf;

	while (fp_i1 >> str_buf)
		list_mat.push_back(str_buf);
	while (fp_i2 >> str_buf)
		list_pat.push_back(str_buf);

	list_result.splice(list_result.begin(), list_mat);
	list_result.splice(list_result.end(), list_pat);

	list_result.sort();
	std::list <std::string>::iterator pt = std::unique(list_result.begin(), list_result.end());

	std::for_each(list_result.begin(), pt, outint);

	return 0;
}