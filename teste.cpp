#include <iostream>
#include "Cheltuieli.h"
#include "Repo.h"
#include <assert.h>
#include <cassert>
#include "Operatii.h"
using namespace std;

void testeCheltuieli() {
	char* tip = new char[10];
	Cheltuieli c(3, 20,tip);
	assert(c.getZi() == 3);
	assert(c.getSuma() == 20);
	c.setZi(7);
	c.setSuma(60);
	assert(c.getZi() == 7);
	assert(c.getSuma() == 60);
}

void testeRepo() {
	char* tip1 = new char[10];
	char* tip2 = new char[10];
	Cheltuieli c1(5, 500, tip1);
	Cheltuieli c2(6, 30, tip2);
	Repo r;

	r.addElem(c1);
	assert(r.getAll()[0].getZi() == 5);
}

void testeOperatii()
{
	char* tip1 = new char[10];
	char* tip2 = new char[10];

	Operatii op;

	op.AddElemOp(6,400,tip2);
	assert(op.getAll()[0].getZi() == 6);
	op.updateElemOp(1, 8, 200,tip2);
	assert(op.getAll()[0].getZi() == 8);

	cout << "Testare cu succes!" << endl;
}