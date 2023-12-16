// frnd2tmp.cpp -- шаблон класс с нешаблонными друзьями
#include <iostream>
using std::cout;
using std::endl;
template <typename T>
class HasFriend
{
private:
	T item;
	static int ct;
public:
	HasFriend(const T& i) : item(i) { ct++; }
	~HasFriend() { ct--; }
	friend void counts();
	friend void reports(HasFriend<T>&); // template parameter
};
// Каждая специализация имеет собственный статический член данных 
template <typename T>
int HasFriend<T>::ct = 0;
// Нешаблонный друг для всех классов HasFriend<T> 
void counts()
{
	cout << "int count: " << HasFriend<int>::ct << "; ";
	cout << "double count: " << HasFriend<double>::ct << endl;
}
// Нешаблонный друг для класса HasFriend<int> 
void reports(HasFriend<int>& hf)
{
	cout << "HasFriend<int>: " << hf.item << endl;
}
// Нешаблонный друг для класса HasFriend<double> 
void reports(HasFriend<double>& hf)
{
	cout << "HasFriend<double>: " << hf.item << endl;
}
int main(void)
{
	cout << "No objects declared: ";	// объекты пока не объявлены 
	counts();
	HasFriend<int> hfi1(10);
	cout << "After hfi1 declared: ";	// после объявления hfi1
	counts();
	HasFriend<int> hfi2(20);
	cout << "After hfi2 declared: ";	// после объявления hfi2 
	counts();
	HasFriend<double> hfdb(10.5);
	cout << "After hfdb declared: ";	// после объявления hfdb 
	counts();
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);
	return 0;
}