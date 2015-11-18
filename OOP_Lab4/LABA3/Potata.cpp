#include"stdafx.h"
#include"Potata.h"
#include"Food.h"
#include<iostream>
#include<iomanip>
using namespace std;
Potata::Potata(void)
{

}
Potata::Potata(const char *Title, const unsigned int Price) :Vege(Title, Price)
{

}
void Potata::setTitle(const char *Title)
{
	this->title = Title;
}

void Potata::setPrice(const unsigned int Price)
{
	this->price = Price;
}

const char* Potata::getTitle()const
{
	return title;
}

unsigned int Potata::getPrice()const
{
	return price;
}

Potata::~Potata(void)
{

}
void Potata::print(void)
{
	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << " руб/кг" << endl;
	
}