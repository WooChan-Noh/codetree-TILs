#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    while(true)
    {
        n/=2;
        count++;
        if(n==1)
        {
            cout<<count;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}