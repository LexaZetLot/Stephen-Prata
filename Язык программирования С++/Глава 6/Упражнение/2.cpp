#include <iostream>
#include <cctype>
int main(void)
{
	double num[10] = { 0 };
	char ch = 0;
	int flag = 0;
	bool flag_point = 0;
	for (int i = 0; i < 10; i++)
	{
		while (std::cin.get(ch) && !isspace(ch))
		{
			if (ch == '.')
			{
				flag_point = true;
				continue;
			}
			if (isalpha(ch))
			{
				flag_point = false;
				continue;
			}
			if (isdigit(ch) && flag_point == false)
			{
				num[i] *= 10;
				num[i] += (int)ch - 48;
				continue;
			}
			if (isdigit(ch) && flag_point == true)
			{
				num[i] *= 10;
				num[i] += (int)ch - 48;
				flag++;
			}
		}
		if (flag > 0)
			num[i] /= flag * 10;
		flag = 0;
		flag_point = false;
	}
	for (int i = 0; i < 10; i++)
		std::cout << num[i] << std::endl;
	return 0;
}