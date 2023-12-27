#include <iostream>
using namespace std;
int main() {

    int a,b,c;

    cin>>a>>b;
    cout<<a/b<<".";
    c=a%b;
    for(int i=0;i<20;i++)
    {
        if(c==0)
            cout<<0;
        else
        {
            cout<<(c*10)/b;
            c=(c*10)%b;
        }
            
    }
    return 0;
}