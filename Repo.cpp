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

Cheltuieli* Repo::getAll()
{
    return this->ct;
}

int Repo::getSize()
{
    return this->nrC;
}

void Repo::addElem(Cheltuieli c)
{
    this->ct[this->nrC++] = c;
}

void Repo::deleteElem(int zi,int suma,char* tip)
{
    int poz = -1;
    for (int i = 0; i < this->getSize(); i++) {
        if (this->ct[i].getZi() == zi) {
            poz = i;
        }
    }
    for (int i = poz; i < this->getSize() - 1; i++) {
        this->ct[i].setZi(this->ct[i + 1].getZi());
        this->ct[i].setSuma(this->ct[i + 1].getSuma());
        this->ct[i].setTip(this->ct[i + 1].getTip());
    }
    this->nrC -= 1;
    //return* this;
   //ct[i] = ct[nrC - 1];
   //nrC--;
}

void Repo::updateElem(int i,int zi,int suma,char* tip)
{
    Cheltuieli c(zi, suma, tip);
    this->ct[i - 1] = c;
}