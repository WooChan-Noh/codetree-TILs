#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int aEnglish,aMath,bEnglish,bMath;
    cin>>aMath>>aEnglish>>bMath>>bEnglish;

    if((aEnglish>bEnglish)&&(aMath>bMath))
        cout<<1;
    else
        cout<<0;

    return 0;
}