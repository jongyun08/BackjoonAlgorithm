#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	while (true)
	{
		int sum = 0;
		cin >> n;
		vector<int> factor;
		if (n == -1)
			break;
		for (int i = 1; i < n; ++i)
		{
			if (n % i == 0)
			{
				factor.push_back(i); // 약수 저장
				sum += i;
			}
		}
		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 0; i < factor.size() - 1; ++i)
			{
				cout << factor[i] << " + ";
			}
			cout << factor[factor.size() - 1] << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;
	}
	
	return 0;
}