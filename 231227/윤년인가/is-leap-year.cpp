#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    cin>>year;

    if(year%4==0 ||  (year>=400 && year%400==0)) 
        cout<<"true";
    else
        cout<<"false";
    return 0;
}