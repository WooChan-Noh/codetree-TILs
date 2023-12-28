#include <iostream>
using namespace std;
int main() {
    int n,product=1;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        product*=i;
        if(product>=n)
        {
            cout<<i;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}