#include <iostream>
using namespace std;

int main()
{
	short N;
	cin >> N;
	for (short i = 0; i < N; i++) {
		for (short k = N-1; k  > i ; k --)
		{
			cout << " ";
		}
		for (short j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}