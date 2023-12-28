#include <iostream>
using namespace std;

int X;              
short N;            
int a;              
short b;            
int sum = 0;
int main()
{
    cin >> X;
    cin >> N;
    for (short i = 0; i < N; i++) {
        cin >> a;
        cin >> b;
        sum = sum + (a * b);
    }
    if (X == sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
