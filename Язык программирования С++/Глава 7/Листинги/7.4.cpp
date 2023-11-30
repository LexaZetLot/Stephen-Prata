// lotto.срр -- вероятность выигрыша 
#include <iostream>
// Примечание: некоторые реализации требуют применения double вместо long double 
long double probability(unsigned numbers, unsigned picks);
int main(void)
{
	using namespace std;
	double total, choices;
	// Ввод общего количества номеров и количества номеров, которые нужно угадать 
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);	// вычисление и вывод шансов 
		cout << " of winning. \n";
		cout << "Next two numbers (q to quit) : ";
		// Ввод следующих двух чисел (q для завершения) 
	}
	cout << "bye\n";
	return 0;
}
//------------------------------------------------------------------------------------------------
// Следующая функция вычисляет вероятность правильного 
// угадывания picks чисел из numbers возможных 
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // несколько локальных переменных 
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}