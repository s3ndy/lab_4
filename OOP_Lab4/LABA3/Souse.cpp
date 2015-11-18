#include "StdAfx.h"
#include "Souse.h"
#include <iostream>
#include<iomanip>
using namespace std;
Souse::Souse(void){}
Souse::Souse(const char *Title, const unsigned int Price) :Food(Title, Price){};

void Souse::setTitle(const char*Title)
{
	this->title = Title;
}
void Souse::setPrice(unsigned int Price)
{
	this->price = Price;
}
const char* Souse::getTitle()const
{
	return title;
}
unsigned int  Souse::getPrice()const
{
	return price;
}
Souse::~Souse(void){}
void Souse::print(void)
{

	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << "руб/упаковка" << endl;

}
void Souse::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}
void Souse::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Food * q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		}
	}
}