#include <string>
#include <cstring>

void ToUpper(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
}