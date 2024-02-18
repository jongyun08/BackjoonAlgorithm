#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int C[10000] = { 0 };
	int Quarter = 0;
	int Dime = 0;
	int Nickel = 0;
	int Penny = 0;
	for (int i = 0; i < T; ++i)
	{
		cin >> C[i];
	}
	for (int i = 0; i < T; ++i)
	{
		if (C[i] >= 25)
		{
			Quarter = C[i] / 25;
			C[i] = C[i] % 25;
			Dime = C[i] / 10;
			C[i] = C[i] % 10;
			Nickel = C[i] / 5;
			C[i] = C[i] % 5;
			Penny = C[i] / 1;
		}

		else if (C[i] < 25)
		{
			Dime = C[i] / 10;
			C[i] = C[i] % 10;
			Nickel = C[i] / 5;
			C[i] = C[i] % 5;
			Penny = C[i] / 1;
		}
		else if (C[i] < 10)
		{
			Nickel = C[i] / 5;
			C[i] = C[i] % 5;
			Penny = C[i] / 1;
		}
		else if (C[i] < 5)
		{
			Penny = C[i] / 1;
		}
		cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << endl;
	}
  	return 0;
}