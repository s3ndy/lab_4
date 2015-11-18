
#pragma once
#include"Food.h"
#include <iostream>

class Souse :public Food
{
public:
	Souse(void);
	Souse(const char*, const unsigned int);

	virtual void setTitle(const char *Title);
	virtual const char* getTitle()const;
	virtual void setPrice(const unsigned int Price);
	virtual unsigned int getPrice()const;
	friend std::ostream& operator<<(std::ostream &out, const Souse& e);
	virtual void print(void);
	static void show(); // статический метод
	virtual void add();
	~Souse(void);
};