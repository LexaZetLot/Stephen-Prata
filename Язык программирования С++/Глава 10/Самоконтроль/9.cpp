#include <string>
class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string& со, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock& topval(const Stock& s) const;
	const std::string& f1() const { return company; };
	int f2() const { return shares; };
	double f3() const { return share_val; };
	double f4() const { return total_val; };
};