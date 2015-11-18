// LABA3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include <fstream>
#include "Food.h"
#include "Meat.h"
#include "Souse.h"
#include "Eg.h"
#include "Vege.h"
#include "Luc.h"
#include"Potata.h"
#include"Karot.h"
#include "locale"
using namespace std;

std::ostream& operator<<(std::ostream &out, const Vege& e){

	out << "Название " << e.getTitle() << "\nЦена: " << e.getPrice();
	return out;
};

int _tmain(int argc, _TCHAR* argv[])
{	setlocale(LC_ALL, "rus");

	Meat vasya("Свинина",10);
	vasya.print();
	 
	Souse petya("Сырный", 17600);
	petya.print();

	Eg kolya("Куриные", 12000);
	kolya.print();

	Vege pasha("Перец", 20000);
	pasha.print();

	Luc sergei("Лук", 10000);
	sergei.print();

	Potata danya("Картошка", 5000);
	danya.print();

	Karot sveta("Морковь", 4000);
	sveta.print();

	/* Salat olive(50);
	olive.add(&sergei);
	olive.add(&sveta);*/
	
	//Cook GUZU;
	//GUZU.countCalorii(olive);
	return 0;
	}

