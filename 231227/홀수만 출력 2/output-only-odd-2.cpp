#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>b>>a;

    for(int i=b;a<=i;i--)
    {
        if(i%2==1)
        {
            cout<<i<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}