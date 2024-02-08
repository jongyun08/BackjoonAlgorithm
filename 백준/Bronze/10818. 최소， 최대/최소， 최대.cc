#include <iostream>
using namespace std;

int main()
{
	int N;
	int oldN = 0;
	int MaxN = -1000000;
	int MinN = 1000000;
	cin >> N;
	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
		if (arr[i] < MinN)
			MinN = arr[i];
		if (arr[i] > MaxN)
			MaxN = arr[i];
	}
	cout << MinN << " " << MaxN << endl;
	return 0;
}
