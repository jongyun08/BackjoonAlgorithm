#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 2;	// 초기 점의 갯수;
	int oldcount = 0;
	int newcount = 0;
	for (int i = 0; i < n + 1; ++i)
	{
		oldcount = count;
		newcount = (oldcount * 2) - 1;
		oldcount *= oldcount;
		count = newcount;
	}
	cout << oldcount << endl;
	return 0;
}