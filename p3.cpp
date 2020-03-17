#include <iostream>
using namespace std;

bool isPrime(int n) {
	int i;
	for (i = 2; i <= n / 2; i++) {
		if (n % 2 == 0) {
			return false;
		}
	}
	return true;
}

/*
bool estePrim(int nr)
{
	bool ep = true;
	int k = 2;
	while (k <= nr / 2 && ep) 
	{
		if (nr % k == 0) ep = false;
		k++;
	}
	return ep;
}*/


int p3(int v[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "-> ";
		cin >> v[i];
	}

	int i = 1;
	int pozMax = 0, lungMax = 0;

	while (i <= n)
	{
		int k = i;
		int nrPrime = 0;
		while (isPrime(v[k]) && k <= n)
		{
			nrPrime++;
			k++;
		}
		if (nrPrime > lungMax)
		{
			lungMax = nrPrime;
			pozMax = i;
		}
		i++;
	}
	for (int i = pozMax; i <= pozMax + lungMax - 1; i++)
	{ 
		cout << v[i] << "\n";
	}
	return 0;
}