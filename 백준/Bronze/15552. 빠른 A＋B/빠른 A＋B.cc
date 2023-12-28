#include <iostream>

using namespace std;

int T;
short A;
short B;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A;
        cin >> B;
        cout << A + B << "\n";
    }

    return 0;
}