// strctfun.cpp -- функции с аргументами-структурами 
#include <iostream>

// ќбъ€влени€ структур
struct polar
{
	double distance;		// рассто€ние от исходной точки 
	double angle;			// направление от исходной точки 
};

struct rect
{
	double x;				// рассто€ние по горизонтали от исходной точки 
	double y;				// рассто€ние по вертикали от исходной точки 
};
// ѕрототипы
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(void)
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";						// ввод значений х и у 
	while (cin >> rplace.x >> rplace.y)							// ловкое использование с≥п 
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit) : ";
				// ¬вод следующих двух чисел (q дл€ завершени€) 
	}
	cout << "Done.\n";
	return 0;
}
// ѕреобразование пр€моугольных координат в пол€рные 
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;												// возврат структуры polar 
}
// ќтображение пол€рных координат с преобразованием радиан в градусы 
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}