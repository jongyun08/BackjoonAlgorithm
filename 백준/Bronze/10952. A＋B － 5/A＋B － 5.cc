#include <iostream>
using namespace std;

int main()
{
	short A;
	short B;

	while (true)
	{
		cin >> A;
		cin >> B;
		if (A == 0 && B == 0)
			break;
		else
			cout << A + B << endl;
			
	}
	return 0;
}