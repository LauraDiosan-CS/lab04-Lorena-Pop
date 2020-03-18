#include "Repo.h"
#include <string.h>
#include <cstddef>
#include"Cheltuieli.h"
#include <iostream>
using namespace std;

Repo::Repo()
{
    this->nrC = 0;
}

Repo::~Repo()
{

}

void Repo::addElem(Cheltuieli c)
{
    this->ct[this->nrC++] = c;
}

Cheltuieli* Repo::getAll()
{
    return this->ct;
}

int Repo::getSize()
{
    return this->nrC;
}
