#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    switch(n)
    {
        case 2:
            cout<<28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<30;
            break;
        default:
            cout<<31;
            break;

    }
    return 0;
}