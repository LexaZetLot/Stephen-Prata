class Stack
{
private:
	enum { MAX = 10 };
	Worker* items[MAX];
	int top;
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Worker*& item);
	bool pop(Worker*& item);
};