
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	char num[100] = { 0 };
	
	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> num[i];
		sum += num[i] - '0';
	}
	cout << sum << endl;
	return 0;
}