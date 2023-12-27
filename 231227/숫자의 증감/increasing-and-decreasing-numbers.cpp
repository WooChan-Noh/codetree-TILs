#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char c;
    cin>>c>>n;
    if(c=='A')
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
    }else
    {
         for(int i=n;1<=i;i--)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}