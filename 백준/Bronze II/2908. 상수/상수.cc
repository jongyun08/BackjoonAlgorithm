#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A;
	string B;
	cin >> A >> B;
	for (int i = 0; i < A.length() / 2; ++i)
	{
		char temp = A[i];
		A[i] = A[(A.length() - i - 1)];
		A[(A.length() - i - 1)] = temp;

	}
	for (int i = 0; i < B.length() / 2; ++i)
	{
		char temp = B[i];
		B[i] = B[(B.length() - i - 1)];
		B[(B.length() - i - 1)] = temp;
	}
	if (A.compare(B) > 0)
		cout << A;
	else
		cout << B;
	
	return 0;
}