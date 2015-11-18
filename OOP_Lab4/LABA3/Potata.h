#pragma once
#include"Vege.h"
#include<iostream>
class Potata:
	public Vege
{
public:
	unsigned int period_sozr;
public:
	Potata(void);
	Potata(const char*, const unsigned int);
	virtual void setTitle(const char *Title);
	virtual void setPrice(const unsigned int Price);
	//virtual void setSort(const char *Sort);
	//virtual void setPeriod_sozr(const unsigned int Period_sozr);
	virtual const char* getTitle()const;
	virtual unsigned int getPrice()const;
	//virtual const char* getSort()const;
	//virtual unsigned int getPeriod_sozr()const;
	virtual void print(void);
	~Potata(void);
};