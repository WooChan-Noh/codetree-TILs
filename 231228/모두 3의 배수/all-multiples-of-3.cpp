#include <iostream>
using namespace std;
int main() {
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        if(n%3==0)
            continue;
        else
        {
            cout<<0;
            return 0;
        }
    }
    cout<<1;
    // 여기에 코드를 작성해주세요.
    return 0;
}