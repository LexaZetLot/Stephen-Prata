// structur.срр -- проста€ структура
#include <iostream>
struct inflatable			// объ€вление структуры 
{
	char name[20];
	float volume;
	double price;
};
int main(void)
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria", // значение name 
		1.88,			   // значение volume 
		29.99			   // значение value 
	}; // guest Ч структурна€ переменна€ типа inflatable 
	// »нициализаци€ указанными значени€ми 
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	}; // pal Ч втора€ переменна€ типа inflatable 
	// ѕ–»ћ≈„јЌ»≈: неккоторые реализации требуют использовани€
	// static = inflatable quest =

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";	// pal.name - член name переменной pal 
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;
}