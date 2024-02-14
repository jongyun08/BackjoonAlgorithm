#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	char str[1000] = { 0 };
	int count = 0;
	for (int i = 0; i < T; ++i)
	{
		cin >> str;
		for (int j = 0; j < 999; ++j)
		{
			if (str[j] != 0)
				count++;
			else
				break;
		}
		cout << str[0] << str[count - 1] << endl;
		count = 0;
	}
	
	
	
	return 0;
}