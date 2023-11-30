// arrfun2.срр -- функция с аргументом-массивом 
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
//Использование std:: вместо директивы using
int main(void)
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	// Некоторые системы требуют предварить int словом static, 
	// чтобы разрешить инициализацию массива 
	std::cout << cookies << " = array address, ";
	// Некоторые системы требуют приведения типа: unsigned (cookies) 
	std::cout << sizeof cookies << " = sizeof cookies\n";
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	// Общее количество съеденного печенья 
	sum = sum_arr(cookies, 3);				// первая хитрость   
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	// Съеденое первым тремя
	sum = sum_arr(cookies + 4, 4);			// вторая хитрость 
	std::cout << "Last four eaters ate " << sum << " cookies.\n";
	// Съеденое последними четырьмя
	return 0;
}
// Возвращает сумму элементов целочисленного массива 
int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
	// Некоторые системы требуют приведения типа: unsigned (arr) 
	std::cout << sizeof arr << " = sizeof arr\n";
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}