#include <iostream>
using namespace std;

int main()
{
	char str[1001] = { 0 };
	int i;
	cin >> str;
	cin >> i;
	for (int x = 0; x < 1000; ++x)
	{
		if (str[x] == str[i - 1])
		{
			cout << str[x];
			break;
		}
	}
	
	return 0;
}