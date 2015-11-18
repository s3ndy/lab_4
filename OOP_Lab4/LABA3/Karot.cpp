#include"stdafx.h"
#include"Karot.h"
#include"Food.h"
#include<iostream>
#include<iomanip>
using namespace std;
Karot::Karot(void)
{

}
Karot::Karot(const char *Title, const unsigned int Price) :Vege(Title, Price)
{

}
void Karot::setTitle(const char *Title)
{
	this->title = Title;
}

void Karot::setPrice(const unsigned int Price)
{
	this->price = Price;
}
const char* Karot::getTitle()const
{
	return title;
}

unsigned int Karot::getPrice()const
{
	return price;
}

Karot::~Karot(void)
{

}
void Karot::print(void)
{
	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << " руб/кг" << endl;
}