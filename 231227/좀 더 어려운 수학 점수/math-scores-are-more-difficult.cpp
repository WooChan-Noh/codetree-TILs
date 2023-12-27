#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int aMathScore,aEnglishScore,bMathScore,bEnglishScore;
    cin>>aMathScore>>aEnglishScore>>bMathScore>>bEnglishScore;

    if(aMathScore>bMathScore || (aMathScore==bMathScore && aEnglishScore>bEnglishScore))
    {
        cout<<'A';
    }
    else
    {
        cout<<'B';
    }
    return 0;
}