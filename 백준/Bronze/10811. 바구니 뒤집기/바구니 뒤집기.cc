#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int i, j;
	int arr[100] = { 0 };
	for (int x = 0; x < N; ++x)
	{
		arr[x] = x + 1;
	}
	for (int x = 0; x < M; ++x)
	{
		cin >> i >> j;
		while (true)
		{
			int temp = arr[i - 1];
			arr[i - 1] = arr[j - 1];
			arr[j - 1] = temp;
			i++;
			j--;
			if (i > j)
				break;
		}	
	}
	for (int x = 0; x < N; ++x)
	{
		cout << arr[x] << " ";
	}
	return 0;
}