#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int firstTemperature,secondTemperature,thirdTemperature,emergancyCount=0;
    char firstIsCold, secondIsCold, thirdIsCold;

    cin>>firstIsCold>>firstTemperature>>secondIsCold>>secondTemperature>>thirdIsCold>>thirdTemperature;

    if(firstIsCold=='Y')
    {
        if(firstTemperature>=37)
            emergancyCount++;
    }

    if(secondIsCold=='Y')
    {
        if(secondTemperature>=37)
            emergancyCount++;
    }
    
    if(thirdIsCold=='Y')
    {
        if(thirdTemperature>=37)
            emergancyCount++;
    }

    if(emergancyCount>=2)
        cout<<'E';
    else
        cout<<'N';


    return 0;
}