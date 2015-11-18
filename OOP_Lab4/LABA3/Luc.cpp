#include"stdafx.h"
#include"Luc.h"
#include"Food.h"
#include<iostream>
#include<iomanip>
using namespace std;
Luc::Luc(void)
{

}
Luc::Luc(const char *Title, const unsigned int Price) :Vege(Title, Price)
{

}
void Luc::setTitle(const char *Title)
{
	this->title = Title;
}

void Luc::setPrice(const unsigned int Price)
{
	this->price = Price;
}
const char* Luc::getTitle()const
{
	return title;
}

unsigned int Luc::getPrice()const
{
	return price;
}
Luc::~Luc(void)
{

}
void Luc::print(void)
{
	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() <<" руб/кг" << endl;
	
}