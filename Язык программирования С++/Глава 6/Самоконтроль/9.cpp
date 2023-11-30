#include <iostream>
int main(void)
{
	char ch = 0;
	int line = 0;
	while (std::cin.get(ch) && ch != 'Q')
	{
		if (ch != '\n')
			continue;
		line++;
	}
	return 0;
}