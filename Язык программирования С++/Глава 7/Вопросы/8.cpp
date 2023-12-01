int replacr(char* str, char c1, char c2);
int main(void)
{
	return 0;
}
int replacr(char* str, char c1, char c2)
{
	int num = 0;
	do
		if (*str == c1)
		{
			*str = c2;
			num++;
		}
	while (str++ != 0);
	return num;
}