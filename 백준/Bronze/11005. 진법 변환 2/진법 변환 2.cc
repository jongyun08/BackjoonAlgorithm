#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int B;
	cin >> N >> B;
	int i = 0;
	string total = "\0";
	while (N != 0)
	{
		int tmp = N % B;
		if (tmp > 9)
		{
			tmp = tmp + 55;
			total += tmp;
		}
		else
		{
			tmp = tmp + '0';
			total += tmp;
		}
		N /= B;
	}
	reverse(total.begin(), total.end());
	cout << total << endl;
	return 0;
}