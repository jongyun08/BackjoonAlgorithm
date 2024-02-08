#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j, k;
	int number = 0;
	int arr[100] = { 0 };
	cin >> N >> M;
	for (int x = 0; x < M; ++x)
	{
		cin >> i >> j >> k;	
		while (true)
		{
			arr[i - 1] = k;
			i++;
			if ((i - 1) == j)
			{
				break;
			}
		}
	}
	for (int x = 0; x < N; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}