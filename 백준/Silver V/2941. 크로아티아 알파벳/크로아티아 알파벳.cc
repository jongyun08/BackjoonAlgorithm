#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> croatian = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string str;
	cin >> str;
	int index = 0;
	for (int i = 0; i < croatian.size(); ++i)
	{
		while (true)
		{
			index = str.find(croatian[i]);
			if (index == string::npos)
				break;
			str.replace(index, croatian[i].length(), "#");
		}
	}
	cout << str.length();
	return 0;
}