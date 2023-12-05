#ifndef FUNCTION 
#define FUNCTION 
#define MAX 10
class List
{
private:
	List* root;
	int num;
	int size;
public:
	List(int num = 0);
	~List();
	void add_list(int n);
	bool isempty();
	bool isfull();
	bool visit_element(int nn, void(*pf)(int* n));
};
#endif