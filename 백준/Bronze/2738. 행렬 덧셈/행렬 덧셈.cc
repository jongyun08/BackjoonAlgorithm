#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int A[100][100] = { 0, };
	int B[100][100] = { 0 };
	cin >> N >> M;
	for (int y = 0; y < N; ++y)
	{
		for (int x = 0; x < M; ++x)
		{
			cin >> A[y][x];
		}
	}
	for (int y = 0; y < N; ++y)
	{
		for (int x = 0; x < M; ++x)
		{
			cin >> B[y][x];
		}
	}
	for (int y = 0; y < N; ++y)
	{
		for (int x = 0; x < M; ++x)
		{
			cout << A[y][x] + B[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}