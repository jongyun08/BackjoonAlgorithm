#include <iostream>
#include <vector>
using namespace std;

int arr[100][100] = { 0 };

int main()
{
	int num;
	cin >> num;
	int x, y;
	int count = 0;
	while (num--)
	{
		cin >> x >> y;
		for (int i = y; i < y + 10; ++i)
		{
			for (int j = x; j < x + 10; ++j)
			{
				if (arr[i][j] == 0)
				{
					count++;
					arr[i][j] = 1;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}