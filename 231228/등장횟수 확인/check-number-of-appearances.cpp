#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        if(n%2==0)
            count++;
    }
    cout<<count;
    // 여기에 코드를 작성해주세요.
    return 0;
}