#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=n;i<=100;i++)
    {
        if(90<=i)
            cout<<"A ";
        else if(80<=i)
            cout<<"B ";
        else if(70<=i)
            cout<<"c ";
        else if(60<=i)
            cout<<"D ";
        else
            cout<<"F ";

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}