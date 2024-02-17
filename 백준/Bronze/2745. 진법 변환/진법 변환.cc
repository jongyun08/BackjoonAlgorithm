#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N;
	int B;	// 진법
	cin >> N >> B;
	int i = 0;
	int total = 0;
	while (N[i] != '\0')
	{
		total *= B;
		if (N[i] >= 'A' && N[i] <= 'Z')
		{
			total += N[i] - 55;
		}
		else
		{
			total += N[i] - '0';
		}
		i++;
	}
	
	cout << total;
	return 0;
}