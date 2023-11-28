#include <iostream>
struct fish
{
	char str1[30];
	int put;
	float size;
};
int main(void)
{
	using namespace std;
	struct fish* fish1 = new struct fish[10];
	cin >> (fish1 + 3)->size;
	cout << (fish1 + 3)->size;
	return 0;
}