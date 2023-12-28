#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int width,height;
    char character;
    while(true)
    {
        cin>>width>>height>>character;
        cout<<width*height<<endl;
        if(character=='C')
            break;
    }
    return 0;
}