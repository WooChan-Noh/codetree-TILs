#include <iostream>
using namespace std;
int main() {
    int n,countThree=0,countFive=0;
    for(int i=0;i<10;i++)
    {
        cin>>n;
        if(n%3==0)
            countThree++;
        if(n%5==0)
            countFive++;

    }
    cout<<countThree<<" "<<countFive;
    // 여기에 코드를 작성해주세요.
    return 0;
}