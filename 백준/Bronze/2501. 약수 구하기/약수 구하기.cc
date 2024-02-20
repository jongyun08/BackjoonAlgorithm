#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = 10000;
	}

	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0)
		{
			arr[i] = i + 1;
			sort(arr, arr + n);
			count++;
		}	
	}
	if (k > count)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << arr[k - 1] << endl;
	}
	
	
	return 0;
}