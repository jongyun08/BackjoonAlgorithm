#include <iostream>
using namespace std;

int main()
{
	// 학생들의 출석번호
	int check;
	// 제출한 학생
	int arrStudent[30] = { 0 };
	for (int i = 0; i < 28; ++i)
	{
		cin >> check;
		arrStudent[check - 1] = check;
	}
	for (int i = 0; i < 30; ++i)
	{
		if (arrStudent[i] == 0)
		{
			cout << i + 1 << endl;
		}
	}
	return 0;
}