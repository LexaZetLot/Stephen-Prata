// stone1.cpp -- опрелеояемые пользователем функции преобразования
// компилировать вместе с stonewtl.cpp 
#include <iostream>
#include "stonewt1.h"
int main(void)
{
	using std::cout;
	Stonewt poppins(9, 2.8);	// 9 стоунов, 2.8 фунта 
	double p_wt = poppins;		// неявное преобразование 
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds. \n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int(poppins) << " pounds. \n";
	return 0;
}