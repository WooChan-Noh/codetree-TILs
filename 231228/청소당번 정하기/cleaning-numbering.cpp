#include <iostream>
using namespace std;
int main() {
    int n,classRoom=0,hallway=0,toilet=0;
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%12==0)
            toilet++;
        else if(i%3==0)
            hallway++;
        else if(i%2==0)
            classRoom++;
    }
    cout<<classRoom<<" "<<hallway<<" "<<toilet;
    return 0;
}