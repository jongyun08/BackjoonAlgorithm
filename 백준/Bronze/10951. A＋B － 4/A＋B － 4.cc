#include <iostream>
using namespace std;

int main()
{
	short A;
	short B;

	while (true)
	{
		cin >> A >> B;
		if (cin.eof())
			break;
		cout << A + B << endl;

	}
	return 0;
}