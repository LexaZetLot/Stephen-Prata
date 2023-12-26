﻿// strin.cpp -- форматированное чтение из символьного массива 
#include <iostream>	
#include <sstream> 
#include <string> 

int main(void)
{
	using namespace std;
	string lit = "It was a dark and stormy day, and "
		" the full moon glowed brilliantly. ";
	istringstream instr(lit);		// использование буфера для ввода 
	string word;
	while (instr >> word)			// чтение по одному слову 
		cout << word << endl;
	return 0;
}