#include <iostream>
using namespace std;

int main()
{
	int T, Q = 0, D = 0, N = 0, P = 0;
	cin >> T;
	int* C = new int[T];
	
	for (int i = 0; i < T; ++i)
	{
		cin >> C[i];
	}
	for (int i = 0; i < T; ++i)
	{
		Q = C[i] / 25;
		C[i] = C[i] % 25;
		D = C[i] / 10;
		C[i] = C[i] % 10;
		N = C[i] / 5;
		C[i] = C[i] % 5;
		P = C[i];
		cout << Q << " " << D << " " << N << " " << P << endl;
	}
	delete[] C;
  	return 0;
}