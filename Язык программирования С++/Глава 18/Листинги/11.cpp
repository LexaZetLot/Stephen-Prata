// lexcast.cpp -- ������� �������������� �� float � string 
#include <iostream>
#include <string> 
#include "boost/lexical_cast.hpp" 
int main(void)
{
	using namespace std;
	cout << "Enter your weight: ";			// ������ �� ���� ���� 
	float weight;
	cin >> weight;
	string gain = "A 10% increase raises "; // ���������� ���� �� 10% � ����� ���������� 
	string wt = boost::lexical_cast<string>(weight);
	gain = gain + wt + " to ";				// operator* () ��� ������ 
	weight = 1.1 * weight;
	gain = gain + boost::lexical_cast<string>(weight) + ".";
	cout << gain << endl;
	return 0;
}