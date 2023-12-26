#include <iostream>
using namespace std;
int main() {
    float rigthEye,leftEye;
    cin>>rigthEye>>leftEye;
    if(1.0<=rigthEye && 1.0<=leftEye)
        cout<<"High";
    else if(0.5<=rigthEye && 0.5<=leftEye)
        cout<<"Middle";
    else   
        cout<<"Low";
    // 여기에 코드를 작성해주세요.
    return 0;
}