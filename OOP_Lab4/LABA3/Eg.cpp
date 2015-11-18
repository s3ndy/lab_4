#include "StdAfx.h"
#include "Eg.h"
#include <iostream>
#include<iomanip>
using namespace std;
Eg::Eg(void){}
Eg::Eg(const char *Title, const unsigned int Price) :Food(Title, Price){};

void Eg::setTitle(const char*Title)
{
	this->title = Title;
}
void Eg::setPrice(unsigned int Price)
{
	this->price = Price;
}
const char* Eg::getTitle()const
{
	return title;
}
unsigned int  Eg::getPrice()const
{
	return price;
}
Eg::~Eg(void){}
void Eg::print(void)
{

	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << "руб/десяток" << endl;

}
void Eg::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}
void Eg::add()
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