#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,sum=0;
    float average=0;
    cout<<fixed;
    cout.precision(1);

    for(int i=0;i<10;i++)
    {
        cin>>n;
        if(0<=n && n<=200)
        {
            sum+=n;
            average++;
        }
    }
    average=sum/average;
    cout<<sum<<" "<<average;
    return 0;
}