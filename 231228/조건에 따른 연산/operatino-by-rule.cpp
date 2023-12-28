#include <iostream>
using namespace std;
int main() {
    int count=0,n;
    cin>>n;
    while(true)
    {
        if(n%2==0)
        {
            n=n*3+1;
            count++;
        }
        else
        {
            n=n*2+2;
            count++;
        }

        if(n>=1000)
        {
            cout<<count;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}