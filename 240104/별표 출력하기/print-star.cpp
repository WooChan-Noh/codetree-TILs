#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n-1;0<i;i--)
    {
        for(int j=i;0<j;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}