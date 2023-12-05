#include "function.h" 

List::List(int n)
{
	root = NULL;
	num = n;
	size = 1;
}
List::~List()
{
}
void List::add_list(int n)
{
	if (root == NULL)
	{
		root = new List;
		root->root = NULL;
		root->num = n;
		root->size = size + 1;
	}
	else
		root->add_list(n);
}
bool List::isempty()
{
	if (root == NULL)
		return true;
	else
		return false;
}
bool List::isfull()
{
	if (root != NULL)
		root->isfull();
	else
		if (size == MAX)
			return true;
		else
			return false;
}
bool List::visit_element(int nn, void(*pf)(int* n))
{
	if (nn != size)
		if (root == NULL)
			return false;
		else
			root->visit_element(nn, pf);
	else
		(*pf) (&num);
	return true;
}