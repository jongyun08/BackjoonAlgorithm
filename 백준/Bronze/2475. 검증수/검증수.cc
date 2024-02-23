#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 0, };
	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}
	int result = 0;
	for (int i = 0; i < 5; ++i)
	{
		result += (arr[i]*arr[i]);
	}
	result %= 10;
	cout << result;
	return 0;
}