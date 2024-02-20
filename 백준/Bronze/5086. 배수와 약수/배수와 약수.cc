#include <iostream>
using namespace std;

int main()
{
	int n, m;
	while (true)
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
		{
			break;
		}
		if (n > m)
		{
			if (n % m == 0)
			{
				cout << "multiple" << endl;
			}
			else
			{
				cout << "neither" << endl;
			}
		}
		else if (n < m)
		{
			if (m % n == 0)
			{
				cout << "factor" << endl;
			}
			else
			{
				cout << "neigther" << endl;
			}
		}
	}
	return 0;
}