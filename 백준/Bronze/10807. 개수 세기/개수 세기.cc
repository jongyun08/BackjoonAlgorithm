#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int num;
	int count = 0;
	int* arr = (int*)malloc(sizeof(int) * N);
	int v;
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}
	cin >> v;
	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == v)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}