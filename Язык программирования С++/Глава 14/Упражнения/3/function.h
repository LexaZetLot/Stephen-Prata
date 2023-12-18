#ifndef FUNCTION_H_   
#define FUNCTION_H_  
#include <iostream>
#include <valarray>
#include <string>

template <class T>
class QueueTp
{
private:
	struct Node
	{
		T data;
		Node* next = NULL;
		Node* prev = NULL;
	};
	Node* head = NULL;
	Node* tail = NULL;

public:
	QueueTp();
	QueueTp(const QueueTp<T>& q);
	~QueueTp();

	bool enqueue(const T& val);
	bool dequeue(T& val);
	bool isEmpty() const;

	QueueTp<T>& operator = (const QueueTp<T>& q);

};
template <class T>
QueueTp<T>::QueueTp()
{
	head = NULL;
	tail = NULL;
}

template <class T>
QueueTp<T>::QueueTp(const QueueTp<T>& q)
{
	Node* tail = q.tail;
	while (tail != NULL)
	{
		enqueue(tail->data);
		tail = tail->prev;
	}
}

template <class T>
QueueTp<T>::~QueueTp()
{
	Node* h = head;
	while (h != tail && h != NULL)
	{
		h = h->next;
		delete h->prev;
	}
	delete h;
	head = NULL;
	tail = NULL;
}

template <class T>
bool QueueTp<T>::enqueue(const T& val)
{
	Node* pt = new Node;
	if (isEmpty())
	{
		pt->data = val;
		pt->next = NULL;
		pt->prev = NULL;
		head = pt;
		tail = pt;
	}
	else
	{
		pt->data = val;
		pt->next = head;
		pt->prev = NULL;
		head->prev = pt;
		head = pt;
	}
	return true;
}

template <class T>
bool QueueTp<T>::dequeue(T& val)
{
	if (isEmpty())
	{
		return false;
	}
	else
		if (head == tail)
		{
			val = tail->data;
			delete tail;
			head = tail = nullptr;
		}
		else
		{
			val = tail->data;
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}
	return true;
}

template <typename T>
bool QueueTp<T>::isEmpty() const
{
	if (nullptr == head && nullptr == tail)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <typename T>
QueueTp<T>& QueueTp<T>::operator = (const QueueTp<T>& q)
{
	if (&q == this)
	{
		return *this;
	}

	Node* h = head;
	while (h != tail && h != NULL)
	{
		h = h->next;
		delete h->prev;
	}
	delete h;
	head = NULL;
	tail = NULL;

	Node* t = q.tail;
	while (t != nullptr)
	{
		enqueue(t->data);
		t = t->prev;
	}
}

class Worker
{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string& s, long n)
		: fullname(s), id(n) {}
	virtual ~Worker() = 0;
	virtual void Set() = 0;
	virtual void Show() const = 0;
};
class Waiter : virtual public Worker
{
private:
	int panache;
protected:
	void Data() const;
	void Get();
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string& s, long n, int p = 0)
		: Worker(s, n), panache(p) {}
	Waiter(const Worker& wk, int p = 0)
		: Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};
class Singer : virtual public Worker
{
protected:
	enum {
		other, alto, contralto, soprano,
		bass, baritone, tenor
	};
	enum { Vtypes = 7 };
	void Data() const;
	void Get();
private:
	const static char* pv[Vtypes];
	int voice;
public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string& s, long n, int v = other)
		: Worker(s, n), voice(v) {}
	Singer(const Worker& wk, int v = other)
		: Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};
class SingingWaiter : public Singer, public Waiter
{
protected:
	void Data() const;
	void Get();
public:
	SingingWaiter() {}
	SingingWaiter(const std::string& s, long n, int p = 0,
		int v = other)
		: Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
	SingingWaiter(const Worker& wk, int p = 0, int v = other)
		: Worker(wk), Waiter(wk, p), Singer(wk, v) {}
	SingingWaiter(const Waiter& wt, int v = other)
		: Worker(wt), Waiter(wt), Singer(wt, v) {}
	SingingWaiter(const Singer& wt, int p = 0)
		: Worker(wt), Waiter(wt, p), Singer(wt) {}
	void Set();
	void Show() const;
};
#endif