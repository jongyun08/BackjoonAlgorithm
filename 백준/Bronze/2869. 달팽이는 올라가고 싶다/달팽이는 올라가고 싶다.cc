#include <iostream>
using namespace std;

int main()
{
	// a = 낮에 올라갈 수 있는 미터, b = 밤에 올라갈 수 있는 미터, v = 나무 막대 높이
	int a, b, v;
	cin >> a >> b >> v;
	int day = 1;
	day += (v - a) / (a - b);
	if ((v - a) % (a - b) != 0)
	{
		day++;
	}
	if (a >= v)
		cout << "1";
	else
		cout << day;
	return 0;
}