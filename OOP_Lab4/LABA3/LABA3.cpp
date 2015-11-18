// LABA3.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	out << "�������� " << e.getTitle() << "\n����: " << e.getPrice();
	return out;
};

int _tmain(int argc, _TCHAR* argv[])
{	setlocale(LC_ALL, "rus");

	Meat vasya("�������",10);
	vasya.print();
	 
	Souse petya("������", 17600);
	petya.print();

	Eg kolya("�������", 12000);
	kolya.print();

	Vege pasha("�����", 20000);
	pasha.print();

	Luc sergei("���", 10000);
	sergei.print();

	Potata danya("��������", 5000);
	danya.print();

	Karot sveta("�������", 4000);
	sveta.print();

	/* Salat olive(50);
	olive.add(&sergei);
	olive.add(&sveta);*/
	
	//Cook GUZU;
	//GUZU.countCalorii(olive);
	return 0;
	}

