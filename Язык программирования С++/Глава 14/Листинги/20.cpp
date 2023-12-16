// tempmemb.срр - шаблоны-члены 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
template <typename T>
class beta
{
private:
	template <typename V>					// вложенный член класса шаблона
	class hold
	{
	private:
		V val;
	public:
		hold(V v = 0) : val(v) {}
		void show() const { cout << val << endl; }
		V Value() const { return val; }
	};
	hold<T> q;								// шаблонный объект
	hold<int> n;							// шаблонный объект
public:
	beta(T t, int i) : q(t), n(i) {}
	template<typename U>					// шаблонный метод
	U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
	void Show() const { q.show(); n.show(); }
};
int main(void)
{
	beta<double> guy(3.5, 3);
	cout << "T was set to double\n";		// T установлен в double
	guy.Show();
	cout << "V was set to T, which is double, then V was set to int\n";
	cout << guy.blab(10, 2.3) << endl;
	cout << "U was set to int\n";			// U установлен в int
	cout << guy.blab(10.0, 2.3) << endl;
	cout << "U was set to double\n";		// U установлен в double
	cout << "Done\n";
	return 0;
}