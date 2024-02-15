#include <iostream>
using namespace std;

int main()
{
	int king;
	int queen;
	int rook;
	int bishop;
	int knight;
	int pone;
	cin >> king >> queen >> rook >> bishop >> knight >> pone;
	if (king != 1)
	{
		king = -(king - 1);
	}
	else if (king == 1)
	{
		king = 0;
	}
	if (queen != 1)
	{
		queen = -(queen - 1);
	}
	else if (queen == 1)
	{
		queen = 0;
	}
	if (rook != 2)
	{
		rook = -(rook - 2);
	}
	else if (rook == 2)
	{
		rook = 0;
	}
	if (bishop != 2)
	{
		bishop = -(bishop - 2);
	}
	else if (bishop == 2)
	{
		bishop = 0;
	}
	if (knight != 2)
	{
		knight = -(knight - 2);
	}
	else if (knight == 2)
	{
		knight = 0;
	}
	if (pone != 8)
	{
		pone = -(pone - 8);
	}
	else if (pone == 8)
	{
		pone = 0;
	}
	cout << king << " " << queen << " " << rook << " " << bishop << " " << knight << " " 
		<< pone << endl;
	return 0;
}