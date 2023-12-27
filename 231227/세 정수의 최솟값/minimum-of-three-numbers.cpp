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
        return 0;
    }

    if(b<c)
    {
        if(b<a)
            cout<<b;
        if(a<b)
            cout<<a;
        return 0;
    }

    if(c<a)
    {
        if(c<b)
            cout<<c;
        if(b<c)
            cout<<b;
        return 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}