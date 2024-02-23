#include <iostream>
using namespace std;

using uint = unsigned int;
int main()
{
    uint A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    uint mul = A* B* C;
    uint arr[10] = { 0 };
    while (mul)
    {
        if (mul % 10 == 0)
        {
            arr[0]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 1)
        {
            arr[1]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 2)
        {
            arr[2]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 3)
        {
            arr[3]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 4)
        {
            arr[4]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 5)
        {
            arr[5]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 6)
        {
            arr[6]++;
            mul = mul / 10;
        }

        else if (mul % 10 == 7)
        {
            arr[7]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 8)
        {
            arr[8]++;
            mul = mul / 10;
        }
        else if (mul % 10 == 9)
        {
            arr[9]++;
            mul = mul / 10;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
