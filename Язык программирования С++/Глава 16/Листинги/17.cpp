// strgst1.cpp -- применение STL к строке
#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	using namespace std;
	string letters;
	cout << "Enter the letter grouping (quit to quit): ";	// ввод группы букв
	while (cin >> letters && letters != "quit")
	{
		cout << "Permutations of " << letters << endl;		// перестановка группы букв
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "Enter next sequence (quit to quit): ";		// ввод следующей группы букв
	}
	cout << "Done.\n";
	return 0;
}