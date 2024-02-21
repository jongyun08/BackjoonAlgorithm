#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int M, N;
	cin >> M;
	cin >> N;
	int sum = 0;
	int min = -1;
	int count = 0;
	for (int i = M; i <= N; ++i)
	{	
		for (int j = 1; j <= i; ++j)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			sum += i;
			if (min == -1)
				min = i;
		}
		count = 0;
	}
	if (min == -1)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
	return 0;
}