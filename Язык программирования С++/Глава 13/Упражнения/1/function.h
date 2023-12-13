#ifndef FUNCTION_H_     
#define FUNCTION_H_    
// ������� �����
class Cd								// ������������ �������-����
{
private:
	char performers[50];
	char label[20];
	int selsections;					// ���������� ���������
	double playtime;					// ����� ��������������� � �������
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	~Cd();
	virtual void Report() const;		// ������� ��� ������ � �������-�����
	Cd& operator=(const Cd& d);
};
class Classic : public Cd
{
private:
	char namecom[20];
public:
	Classic();
	Classic(const char* nm, const char* s1, const char* s2, int n, double x);
	Classic(const Classic& d);
	Classic(const char* nm, Cd& d);
	virtual void Report() const;
	Classic& operator=(const Classic& d);
	~Classic();
};
#endif 