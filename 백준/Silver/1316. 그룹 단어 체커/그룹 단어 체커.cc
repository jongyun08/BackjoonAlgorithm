#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string word;
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> word;
		if (word.length() <= 2)
			continue;
		for (int j = 0; j < word.length() - 1; ++j)
		{
			if (word[j] != word[j + 1])
			{
				if (word.find(word[j], j + 2) != string::npos)
				{
					count++;
					break;
				}
			}
		}
	}
	cout << N - count << endl;
	return 0;
}