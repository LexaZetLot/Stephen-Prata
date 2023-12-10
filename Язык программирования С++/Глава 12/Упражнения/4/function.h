// stack.h -- ���������� ������ ��� ��� �����
#ifndef STACK_H_ 
#define STACK_H_ 
#include <iostream>
using Item = unsigned long;

class Stack
{
private:
	enum { MAX = 10 };			// ���������, ����������� ��� ������ 
	Item* pitems; 				// ������ �������� ����� 
	int size; 					// ���������� ��������� � ����� 
	int top; 					// ������ ��� �������� �������� ����� 
public:
	Stack(int n = MAX);			// ������� ���� � n ���������� 
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	// push() ���������� �������� false, ���� ���� ��� ������, 
	// � true � ��������� ������ 
	bool push(const Item& item); // ���������� �������� � ���� 
	// pop () ���������� �������� false, ���� ���� ��� ������, 
	// � true � ��������� ������ 
	bool pop(Item& item); // ���������� �������� �� ����� 
	Stack& operator = (const Stack& st);
	friend std::ostream& operator << (std::ostream& os, const Stack& s);
};
#endif