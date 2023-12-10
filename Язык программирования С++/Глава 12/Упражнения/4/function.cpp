#include "function.h"

Stack::Stack(int n)
{
	pitems = new Item[n];
	size = n;
	top = -1;
}

Stack::Stack(const Stack& st)
{
	pitems = new Item[st.size];
	size = st.size;
	top = st.top;

	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == -1 ? true : false;
}

bool Stack::isfull() const
{
	return top == size - 1 ? true : false;
}

bool Stack::push(const Item& item)
{
	if (top == size - 1)
		return false;
	else
	{
		top++;
		pitems[top] = item;
		return true;
	}
}

bool Stack::pop(Item& item)
{
	if (top == -1)
		return false;
	else
	{
		item = pitems[top];
		pitems[top] = 0;
		top--;
		return true;
	}
}

Stack& Stack::operator= (const Stack& st)
{
	if (this == &st)
		return *this;
	delete[] pitems;

	size = st.size;
	top = st.top;
	pitems = new Item[size];

	for (int i = 0; i < size; i++)
		pitems[i] = (st.pitems)[i];

	return *this;
}

std::ostream& operator << (std::ostream& os, const Stack& s)
{
	for (int i = 0; i <= s.top; i++)
		os << s.pitems[i] << ' ';
	os << '\n';

	os << s.size << ' ' << s.top;

	return os;
}