#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num = 0;
	int result = 0;
	for (int i = 0; i < n; ++i)
	{
		int count = 0;
		cin >> num;
		for (int div = 1; div <= num; ++div)
		{
			if (num % div == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			result++;
		}
	}
	cout << result << endl;
	
	return 0;
}