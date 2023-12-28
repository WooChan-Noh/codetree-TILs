#include <iostream>
using namespace std;
int main() {
    int age,sum=0;
    float average=0;
    while(true)
    {
        cin>>age;
        if(age<30 && age>=20)
        {
            sum+=age;
            average++;
        }
        else
            break;
    }
    cout<<fixed;
    cout.precision(2);
    average=sum/average;
    cout<<average;
    // 여기에 코드를 작성해주세요.
    return 0;
}