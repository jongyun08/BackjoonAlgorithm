#include <iostream>
using namespace std;

int main()
{
    unsigned short N;
    cin >> N;
    for (int i = 1; i < 10; i++)
    {
        cout << N << " * " << i << " = " << N * i << endl;
    }
    return 0;
}

