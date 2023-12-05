#ifndef FUNCTION 
#define FUNCTION 
typedef struct customer
{
	char fullname[40];
	double payment;
} Item;
class Stack
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;

	bool push(const Item& item);

	bool pop(Item& item, int& fullcash);
};
#endif