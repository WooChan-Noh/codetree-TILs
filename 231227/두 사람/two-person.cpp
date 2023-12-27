#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int firstAge, secondAge;
    char firstGender, secondGender;
    cin >> firstAge >> firstGender >> secondAge >>secondGender;

    if(firstAge>=19 && firstGender=='M')
        cout<<1;
    else if(secondAge>=19 && secondGender=='M')
        cout<<1;
    else
        cout<<0;
    return 0;
}