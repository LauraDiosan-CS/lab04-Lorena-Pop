#include <iostream>
#include "Citire.h"
#include "Afisare.h"
#include "p3.h"
#include "p9.h"
#include "teste.h"
using namespace std;

int main()
{
	int v[100];
	int n = 0;
	int sum = 0;
	int choice;
	do
	{
		cout << " 1 - Citire lista" << endl;
		cout << " 2 - Afisare lista" << endl;
		cout << " 3 - Problema 3" << endl;
		cout << " 4 - Problema 9" << endl;
		cout << " 5 - Teste" << endl;
		cout << " 6 - Exit.\n" << endl;
		cout << " Introduce-ti o optiune: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Dati un numar de elemente:";
			cin >> n;
			Citire(v, n);
			break;
		case 2:
			Afisare(v, n);
			break;
		case 3:
		{
			cout << "Dati numarul de elemente:" << "n= ";
			cin >> n;
			isPrime(n);
			p3(v, n);
		}
			break;
		case 4: 
		{
			cout << "Dati numarul de elemente:" << "n= ";
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				cout << i + 1 << "-> ";
				cin >> v[i];
			}
			cout << "Dati suma constanta dorita: " << endl;
			cin >> sum;
			int n = sizeof(v) / sizeof(v[0]);
			sumConst(v, n, sum);
		}
			break;
		case 5:
			test_prim();
			cout << "Testele s-au rulat cu succes!\n" << endl;
			break;
		case 6:
			cout << "Programul s-a terminat!\n";
			break;
		default:
			cout << "Nu exista aceasta optiune. \n"
				<< "Incercati din nou!\n";
			break;
		}

	} while (choice != 6);
	return 0;
}