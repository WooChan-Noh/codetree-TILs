#include <iostream>
using namespace std;
int main() {
    int n,m,sum=0;
    float average=0;
    cout<<fixed;
    cout.precision(1);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        sum+=m;
        average++;
    }
    average=sum/average;
    cout<<sum<<" "<<average;
    // 여기에 코드를 작성해주세요.
    return 0;
}