#include "header.h"
#include <iostream>

PedExcursion::PedExcursion()
{
	guide[0] = '\0'; fraction = 0;
}

PedExcursion::~PedExcursion()
{
}

void PedExcursion::SetGuide(const char* a)
{
	strcpy_s(guide, a);
}

void PedExcursion::SetFraction(double a)
{
	this->fraction = a;
}

double PedExcursion::Income()
{
	return this->price * this->fraction / 100;
}

void PedExcursion::SetNumb(int a)
{
	this->numb = a;
}