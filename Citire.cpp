#include <iostream>
using namespace std;


int Citire(int v[100], int n) {
	cout << "Introduceti " << n << " elemente" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "-> ";
		cin >> v[i];
	}
	return 0;
}
