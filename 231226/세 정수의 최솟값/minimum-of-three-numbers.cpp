#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b)
    {
        if(a<c)
            cout<<a;
        if(c<a)
            cout<<c;
    }

    if(b<c)
    {
        if(b<a)
            cout<<b;
        if(a<b)
            cout<<a;
    }

    if(c<a)
    {
        if(c<b)
            cout<<c;
        if(b<c)
            cout<<b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}