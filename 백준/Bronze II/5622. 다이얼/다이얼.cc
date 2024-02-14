#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sec = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '0')
		{
			sec += 11;
		}
		if (str[i] == '1')
		{
			sec += 2;
		}
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
		{
			sec += 3;
		}
		if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
		{
			sec += 4;
		}
		if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
		{
			sec += 5;
		}
		if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
		{
			sec += 6;
		}
		if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
		{
			sec += 7;
		}
		if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
		{
			sec += 8;
		}
		if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
		{
			sec += 9;
		}
		if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
		{
			sec += 10;
		}
	}
	cout << sec;
	return 0;
}