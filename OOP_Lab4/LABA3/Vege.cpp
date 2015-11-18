#include"stdafx.h"
#include"Vege.h"
#include<iostream>
#include<iomanip>
using namespace std;
Vege::Vege(void)
{

}
Vege::Vege(const char *Title, const unsigned int Price) :Food(Title,Price)
{

}
void Vege::setTitle(const char *Title)
{
	this->title = Title;
}

void Vege::setPrice(const unsigned int Price)
{ 
	this->price = Price;
}
const char* Vege::getTitle()const
{
	return title;
}

unsigned int Vege::getPrice()const
{
	return price;
}
Vege::~Vege(void)
{

}
void Vege::print(void)
{
	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice()  << endl;
	
}
void Vege::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}
void Vege::add()
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

