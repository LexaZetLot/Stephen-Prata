int main(void)
{
	char ch = 0;
	int a_grade = 0;
	int b_grade = 0;
	int c_grade = 0;
	int d_grade = 0;
	int f_grade = 0;
	switch (ch)
	{
	case 'A':
		a_grade++;
	case 'B':
		b_grade++;
	case 'C':
		c_grade++;
	case 'D':
		d_grade++;
	default:
		f_grade++;
		break;
	}
	return 0;
}