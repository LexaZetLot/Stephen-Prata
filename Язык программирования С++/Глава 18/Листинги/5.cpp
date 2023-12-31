// lambda1.��� � ������������� ����������� ���������� 
#include <iostream>
#include <vector> 
#include <algorithm> 
#include <cmath> 
#include <ctime> 
const long Size = 390000L;

int main(void)
{
	using std::cout;
	std::vector<int> numbers(Size);
	std::srand(std::time(0));
	std::generate(numbers.begin(), numbers.end(), std::rand);
	cout << "Sample size = " << Size << '\n';	// ������ ������� 

	// ������������� ������-������� 
	int count3 = std::count_if(numbers.begin(), numbers.end(),
		[](int x) {return x % 3 == 0; });
	cout << "Count of numbers divisible by 3 : " << count3 << '\n';
	// ���������� �����, ������� 3 
	int countl3 = 0;
	std::for_each(numbers.begin(), numbers.end(),
		[&countl3](int x) {countl3 += x % 13 == 0; });
	cout << "Count of numbers divisible by 13: " << countl3 << '\n';
	// ���������� �����, ������� 13 

// ������������� ���������� ������-��������� 
	count3 = countl3 = 0;
	std::for_each(numbers.begin(), numbers.end(),
		[&](int x) {count3 += x % 3 == 0; countl3 += x % 13 == 0; });
	cout << "Count of numbers divisible by 3: " << count3 << '\n';
	// ���������� �����, ������� 3 
	cout << "Count of numbers divisible by 13: " << countl3 << '\n';
	// ���������� �����, ������� 13 
	return 0;
}