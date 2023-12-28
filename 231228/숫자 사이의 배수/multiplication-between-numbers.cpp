#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0;
    float average=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i%5==0 || i%7==0)
        {
            sum+=i;
            average++;
        }
    }
    average=sum/average;
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<average;
    // 여기에 코드를 작성해주세요.
    return 0;
}