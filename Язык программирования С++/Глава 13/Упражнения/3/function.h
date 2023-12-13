#ifndef FUNCTION_H_     
#define FUNCTION_H_
#include <iostream>
class adcDMA
{
private:
	char* label;
	int rating;
protected:
	char* show_label() { return label; }
	int show_rating() { return rating; }
public:
	adcDMA();
	adcDMA(const char* l, int r);
	adcDMA(adcDMA& dma);
	adcDMA& operator= (const adcDMA& adc);

	virtual~adcDMA() = 0;
	virtual void View() const;

	friend std::ostream& operator<<(std::ostream& os, const adcDMA& adc);
};

class baseDMA : public adcDMA
{
private:
public:
	baseDMA();
	baseDMA(const char* l, int r);
	baseDMA(baseDMA& dma);
	baseDMA& operator= (const baseDMA& adc);
	~baseDMA();
	void View() const;

	friend std::ostream& operator<<(std::ostream& os, const baseDMA& adc);
};

class jacksDMA : public adcDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	jacksDMA();
	jacksDMA(const char* c, const char* l, int r);
	jacksDMA(jacksDMA& dma);
	jacksDMA& operator= (const jacksDMA& adc);
	~jacksDMA();
	void View() const;

	friend std::ostream& operator<<(std::ostream& os, const jacksDMA& adc);
};
class hasDMA : public adcDMA
{
private:
	char* style;
public:
	hasDMA();
	hasDMA(const char* s, const char* l, int r);
	hasDMA(hasDMA& dma);
	hasDMA& operator= (const hasDMA& adc);
	~hasDMA();
	void View() const;

	friend std::ostream& operator<<(std::ostream& os, const hasDMA& adc);
};
#endif 