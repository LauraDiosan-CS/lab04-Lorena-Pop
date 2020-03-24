#pragma once
#ifndef REPO_H
#define REPO_H
#include "Cheltuieli.h"
#include <stdlib.h>
#include <iostream>
#include<vector>
#include "Cheltuieli.h"
using namespace std;


class Repo
{
private:
	int nrC;
	Cheltuieli ct[100];
public:
	Repo();
	~Repo();
	void addElem(Cheltuieli c);
	void deleteElem(int zi, int suma, char* tip);
	void updateElem(int i, int zi, int suma, char* tip);
	Cheltuieli* getAll();
	int getSize();
};
#endif
