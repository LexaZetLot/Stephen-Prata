#include <fstream>

int main(void)
{
	char ch;

	std::ifstream fp_i1("file1.txt");
	std::ifstream fp_i2("file2.txt");
	std::ofstream fp_0("file3.txt");

	while (!fp_i1.eof() && !fp_i2.eof())
	{
		while (fp_i1.get(ch) && ch != '\n')
			fp_0.put(ch);
		while (fp_i2.get(ch) && ch != '\n')
			fp_0.put(ch);
		fp_0.put('\n');
		if (!fp_i1.eof())
			fp_i1.get();
		if (!fp_i2.eof())
			fp_i2.get();
	}
	return 0;
}