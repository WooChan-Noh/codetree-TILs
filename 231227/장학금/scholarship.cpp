#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int middleScore, finalScore;
    cin>>middleScore>>finalScore;

    if(middleScore>=90)
    {
        if(finalScore>=95) 
            cout<<100000;
        else if(finalScore>=90)
            cout<<50000;
        else
            cout<<0;
    }
    else
        cout<<0;
    return 0;
}