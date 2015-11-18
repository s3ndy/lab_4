#pragma once
#include"Vege.h"
#include<iostream>
class Karot :
	public Vege 
{
	public:
	Karot(void);
	Karot(const char*, const unsigned int);
	virtual void setTitle(const char *Title);
	virtual void setPrice(const unsigned int Price);

	virtual const char* getTitle()const;
	virtual unsigned int getPrice()const;
	
	virtual void print(void);
	~Karot(void);
};