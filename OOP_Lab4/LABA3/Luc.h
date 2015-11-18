#pragma once
#include"Vege.h"
#include<iostream>
class Luc :
	public Vege
{
public:
	Luc(void);
	Luc(const char*, const unsigned int);
	virtual void setTitle(const char *Title);
	virtual void setPrice(const unsigned int Price);
//	virtual void setSort(const char *Sort);
	virtual const char* getTitle()const;
	virtual unsigned int getPrice()const;
	//virtual const char* getSort()const;
	virtual void print(void);
	~Luc(void);
};