#include <iostream>
using namespace std;

int N;
int count = 0;
int main()
{
    cin >> N;
    int count = N / 4;
    for (int i = 0; i < count; i++) {
        cout << "long ";
    }
    cout << "int" << endl;
    return 0;
}