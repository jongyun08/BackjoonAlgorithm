#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	if (n == 1)
		count = 1;
	for (int i = 2; i <= n; ++count)
		i += 6 * count;
	cout << count;
	return 0;
}