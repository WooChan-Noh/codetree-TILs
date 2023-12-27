#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int gender, age;
    cin>>gender>>age;

    if(gender == 0)
    {
        if(age<19)
            cout<<"BOY";
        else
            cout<<"MAN";
    }
    else if(gender ==1)
    { 
        if(age<19)
            cout<<"GIRL";
        else
            cout<<"WOMAN";
    }
    return 0;
}