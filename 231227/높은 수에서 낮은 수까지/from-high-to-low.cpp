#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        for(int i=a;b<=i;i--)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        for(int i=b;a<=i;i--)
        {
            cout<<i<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}