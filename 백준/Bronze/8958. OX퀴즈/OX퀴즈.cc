#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		int count = 0;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (str[j] == 'O')
			{
				count++;
				sum += count;
			}
			else if (str[j] == 'X')
			{
				count = 0;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}