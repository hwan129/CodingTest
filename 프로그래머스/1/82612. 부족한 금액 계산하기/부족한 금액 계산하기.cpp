#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    long long sum = 0;
    for(int i = 0; i < count; i++){
        sum += price * (i + 1);
    }
    
    if(sum > money)
        answer = sum - money;
    else
        answer = 0;

    return answer;
}