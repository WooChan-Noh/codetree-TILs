#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(1920%i==0 && 2880%i==0)
        {
             cout<<1;
             return 0;
        }   
        
    }
    cout<<0;
    // 여기에 코드를 작성해주세요.
    return 0;
}