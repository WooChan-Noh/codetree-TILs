#include <iostream>
using namespace std;
int main() {
    int n,tens,units;
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        if(i%3==0)
        {
            cout<<0<<" ";
            continue;
        }
        units = i%10;
        tens = i/10;

        if(tens%3==0&&i>=10)
        {
            cout<<0<<" ";
        }
        else if(units%3==0)
            cout<<0<<" ";
        else  
            cout<<i<<" ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}