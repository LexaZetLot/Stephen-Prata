#ifndef FUNCTION 
#define FUNCTION 
#include <string>
class Person
{
private:
	static const int LIMIT = 25;
	std::string lname; 			// ������� 
	char fname[LIMIT]; 			// ��� 
public:
	Person() { lname = "-"; fname[0] = '\0'; } 					// #1
	Person(const std::string& In, const char* fn = "Heyyou");	// #2
	~Person();

	// ��������� ������ ���������� lname � fname 
	void Show() const; 			// ������: ��� ������� 
	void FormalShow() const; 	// ������: �������, ��� 
};
#endif