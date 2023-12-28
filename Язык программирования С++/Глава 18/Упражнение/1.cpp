#include <initializer_list>
#include <iostream>

template <typename T>
T average_list(std::initializer_list<T> list);

int main(void)
{
	// ������ double ������ �� ����������� ������
	auto q = average_list({ 15.4,10.7,9.0 });
	std::cout << q << std::endl;

	// ������ int ������� �� ����������� ������
	std::cout << average_list({ 20,30,19,17,45,38 }) << std::endl;

	// �������������� ������������� ������ double
	auto ad = average_list<double>({ 'A', 70,65.33 });
	std::cout << ad << std::endl;

	return 0;
}

template <typename T>
T average_list(std::initializer_list<T> list)
{
	T sum = 0;
	for (auto i = list.begin(); i != list.end(); i++)
		sum += *i;
	return sum / list.size();;
}