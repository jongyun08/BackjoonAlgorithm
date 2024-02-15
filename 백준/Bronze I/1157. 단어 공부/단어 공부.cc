#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int alpha[26] = { 0 };
	int count = 0;

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] < 97)
			alpha[str[i] - 65]++;	// 대문자
		else
			alpha[str[i] - 97]++;	// 소문자
	}

	int max = 0;
	int max_index = 0;
	for (int i = 0; i < 26; ++i)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			max_index = i;
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		if (alpha[i] == max)
		{
			count++;
		}
	}
	if (count > 1)
		cout << "?" << endl;
	else
		cout << (char)(max_index + 65) << endl;
	return 0;
}