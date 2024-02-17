#include <iostream>
using namespace std;

int main()
{
	int num[9][9] = { 0 };
	int max = -1000;
	int posY = 0, posX = 0;
	for (int y = 0; y < 9; ++y)
	{
		for (int x = 0; x < 9; ++x)
		{
			cin >> num[y][x];
			if (max < num[y][x])
			{
				max = num[y][x];
				posY = y + 1;
				posX = x + 1;
			}
		}
	}
	cout << max << endl;
	cout << posY << " " << posX << endl;
	return 0;
}