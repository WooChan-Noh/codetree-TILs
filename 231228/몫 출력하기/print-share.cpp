#include <iostream>
using namespace std;
int main() {
    int count=0,n;
    while(true)
    {
        cin>>n;
        if(n%2==1)
            continue;
        else
        {
            cout<<n/2<<endl;
            count++;
        }
        if(count==3)
            break;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}