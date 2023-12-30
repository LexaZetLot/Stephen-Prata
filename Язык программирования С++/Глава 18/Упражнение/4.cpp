#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main(void)
{
	using std::list;
	using std::cout;
	using std::endl;
	using std::for_each;
	using std::remove_if;

	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);


	auto outint = [](int n) { std::cout << n << " "; };
	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if([](int n) {return n > 100; });
	etcetera.remove_if([](int n) {return n > 200; });
	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	return 0;
}