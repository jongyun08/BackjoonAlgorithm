// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;



int main()
{
    unsigned short T;
    unsigned short A;
    unsigned short B;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        cin >> A;
        cin >> B;
        cout << A + B << endl;
    }
    return 0;
}
