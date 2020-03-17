#include <iostream>
using namespace std;

int sumConst(int v[100], int n, int sum)
{
	int curr_sum, i, j;
	for (i = 0; i < n; i++)
	{
		curr_sum = v[i];
		for (j = i + 1; j <= n; j++)
		{
			if (curr_sum == sum)
			{
				cout << "Suma se afla intre numerele de pe pozitiile " << i << " si " << j - 1 << "\n";
				return 1;
			}
			if (curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + v[j];
		}
	}
	cout << "Nu s-a gasit nicio combinatie\n";
	return 0;
}
