#pragma once

class Food{
protected:
	const char* title;
	unsigned int price;
	static Food *head;//

public:
	Food *next;//
	Food(const char *, const unsigned int);
	Food(void);

	virtual void setTitle(const char *Title) = 0;
	virtual const char* getTitle()const = 0;
	virtual unsigned int getPrice()const = 0;
	virtual void setPrice(const unsigned int price) = 0;
	virtual void print(void) = 0;
	//virtual void add() = 0;//
	virtual ~Food();
};