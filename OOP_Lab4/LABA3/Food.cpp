#include"stdafx.h"
#include"Food.h"
#include<iostream>

using namespace std;

Food::Food(void){}
Food::Food(const char *Title, const unsigned int PRICE){title =Title;price = PRICE;}
Food::~Food(void){}


Food * Food::head = NULL;