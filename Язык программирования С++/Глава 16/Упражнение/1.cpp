#include <iostream>
#include <string>

bool pol(std::string);

int main(void)
{
	std::string str;


	while (std::cin >> str)
		if (pol(str))
			std::cout << "Pol";

	return 0;
}

bool pol(std::string)
{
	std::string str;
	int i = 0;
	int j = 0;

	for (i = 0, j = str.size() - 1; (i < j) && (i != j); i++, j--)
		if (str[i] != str[j])
			continue;

	if (i == j || i == j + 1)
		return true;
	else
		return false;
}