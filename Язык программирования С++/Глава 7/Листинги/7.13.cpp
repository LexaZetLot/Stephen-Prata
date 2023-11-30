// strctptr.cpp -- функции с аргументами-указател€ми на структуры 
#include <iostream>
#include <cmath>

// ќбъ€влени€ структур 
struct polar
{
	double distance;			// рассто€ние от исходной точки 
	double angle;				// направление от исходной точки 
};
struct rect
{
	double x;					// рассто€ние по горизонтали от исходной точки 
	double y;					// рассто€ние по вертикали от исходной точки 
};
// ѕрототипы
void show_polar(const polar* pda);
void rect_to_polar(const rect* pxy, polar* pda);
int main(void)
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";		// ввод значений х и у 
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);		// передача адресов 
		show_polar(&pplace);					// передача адресов 
		cout << "Next two numbers (q to quit) : ";
		// ¬вод следующих двух чисел (q дл€ завершени€) 
	}
	cout << "Done.\n";
	return 0;
}
// ќтображение пол€рных координат с преобразованием радиан в градусы 
void show_polar(const polar* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}
// ѕреобразование пр€моугольных координат в пол€рные 
void rect_to_polar(const rect* pxy, polar* pda)
{
	pda->distance =
		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}