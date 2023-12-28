#include <iostream>
using namespace std;
int main() {
    int n,count=0,divide=0;
    cin>>n;
    divide=n;
    for(int i=1;i<=n;i++)
    {
        divide/=i;
        count++;
        if(divide<=1)
        {
            cout<<count;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}