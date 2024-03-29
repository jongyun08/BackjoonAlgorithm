#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string S;
	cin >> S;
	vector<int> freq(26, 0);
	for (auto s : S)
	{
		freq[s - 'a']++;
	}
	for (auto it = freq.begin(); it != freq.end(); it++)
	{
		cout << *it << ' ';
	}
}