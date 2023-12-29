#include <iostream>

using namespace std;


int main()
{
	int T;
	cin >> T;
	int A;
	int B;
	int C = 0;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		C = A + B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << C << endl;
	}
	return 0;
}