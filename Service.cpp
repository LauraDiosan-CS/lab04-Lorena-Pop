#pragma once
#include "Service.h"

Service::Service()
{

}

Service::~Service()
{

}

int Service::getSizeOp()
{
	return this->r.getSize();
}

Cheltuieli* Service::getAll()
{
	return this->r.getAll();
}

void Service::AddElemOp(int zi, int suma, char* tip)
{
	Cheltuieli c(zi, suma, tip);
	r.addElem(c);
}

void Service::deleteElemOp(int zi,int suma,char* tip)
{
	r.deleteElem(zi, suma, tip);
}


void Service::updateElemOp(int i,int zi,int suma, char* tip)
{
	Cheltuieli c(zi, suma, tip);
	r.updateElem(i,zi, suma, tip);
}