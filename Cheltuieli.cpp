#include "Cheltuieli.h"
#include <string.h>

Cheltuieli::Cheltuieli() {
	this->zi = 0;
	this->suma = 0;
	this->tip = NULL;
}

Cheltuieli ::~Cheltuieli()
{

}

Cheltuieli::Cheltuieli(int zi, int suma, char* tip) {
	this->zi = zi;
	this->suma = suma;
	this->tip = tip;
}

Cheltuieli::Cheltuieli(const Cheltuieli& c) {
	this->zi = c.zi;
	this->suma = c.suma;
	this->tip = c.tip;
}

void Cheltuieli::setZi(int zi) {
	this->zi = zi;
}

void Cheltuieli::setSuma(int suma) {
	this->suma = suma;
}

void Cheltuieli::setTip(char* tip) {
	this->tip = tip;
}

int Cheltuieli::getZi() {
	return this->zi;
}

int Cheltuieli::getSuma() {
	return this->suma;
}

char* Cheltuieli::getTip() {
	return this->tip;
}

Cheltuieli& Cheltuieli::operator=(const Cheltuieli& c)
{
	this->setZi(c.zi);
	this->setSuma(c.suma);
	this->setTip(c.tip);
	return *this;
}

bool Cheltuieli:: operator==(const Cheltuieli& c)
{
	return strcmp(this->tip, c.tip) == 0 && this->suma == c.suma && this->zi == c.zi;
}

ostream& operator<<(ostream& os, const Cheltuieli& c)
{
	os << c.zi << " " << c.suma << " " << c.tip;
	return os;
}