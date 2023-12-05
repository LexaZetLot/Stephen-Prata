#ifndef FUNCTION 
#define FUNCTION 
namespace SALES
{
	const int QUARTERS = 4;
	class Sales
	{
	private:
		double sales[SALES::QUARTERS];
		double average;
		double max;
		double min;
		void max_min_search(const double* arr, int size, int& max_index, int& min_index);
		void max_min(const double x, const double y, int index, int& indexX, int& indexY);
		void avg(const double* arr, int size, double& avg);
	public:
		Sales(const double* arr, int n);
		void setSales();
		void showSales() const;
	};
}
#endif