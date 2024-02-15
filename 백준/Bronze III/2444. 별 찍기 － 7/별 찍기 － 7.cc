#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = N - (i + 1); j > 0; --j)
		{
			cout << " ";
		}
		for (int k = 0; k < ((i+1) * 2) - 1; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = N; i > 0; --i)
	{
		for (int j = 0; j < N-i+1; ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < ((i - 1) * 2) - 1; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}