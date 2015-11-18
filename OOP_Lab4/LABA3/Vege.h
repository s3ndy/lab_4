#pragma once
#include"Food.h"
#include<iostream>
class Vege :
	public Food
{protected:

public:
	Vege(void);
	Vege(const char*, const unsigned int);
	virtual void setTitle(const char *Title);
	virtual void setPrice(const unsigned int Price);

	virtual const char* getTitle()const;
	virtual unsigned int getPrice()const;
	
	friend std::ostream& operator<<(std::ostream &out, const Vege& e);
	virtual void print(void);
	static void show(); // статический метод
	virtual void add();
	~Vege(void);
};
