#include <iostream>
#include <cctype>
int main(void)
{
	char words[50];

	int vowels = 0;
	int consonants = 0;
	int others = 0;

	while (std::cin >> words && words[0] != 'q')
	{
		if (isalpha(words[0]))
		{
			switch (words[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			case 'y':
			case 'Y':
				vowels++;
				break;
			default:
				consonants++;
				break;
			}
		}
		else
		{
			others++;
		}
	}
	std::cout << vowels << " " << consonants << " " << others;
	return 0;
}