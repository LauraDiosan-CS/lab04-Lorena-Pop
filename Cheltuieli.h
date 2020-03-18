#pragma once
#ifndef CHELTUIELI_H
#define CHELTUIELI_H

#include <stdlib.h>
#include <iostream>
using namespace std;


class Cheltuieli {
private:
	int zi;
	int suma;
	char* tip;
public:
	Cheltuieli();
	Cheltuieli(int zi, int suma, char* tip);
	Cheltuieli(const Cheltuieli& c);
	~Cheltuieli();
	int getZi();
	int getSuma();
	char* getTip();
	void setZi(int zi);
	void setSuma(int suma);
	void setTip(char* tip);
	//Cheltuieli& operator=(const Cheltuieli& c);
	//char* toString();
	//bool compare(Cheltuieli& c);
};

#endif