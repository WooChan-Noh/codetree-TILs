#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=100;i++)
    {
        if(sum<n)   
            sum+=i;
        else
        {
            cout<<i-1;
            break;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}