#include <iostream>
#include <string>
#include <vector>

using namespace std;

int divisor_num(int num){
    
    int count = 0;
    int i = 1;
    while(num >= i * i){    // 대칭 이용. num의 절반까지만 계산
        if(num % i == 0){
            count++;
            if(i != num/i) count++; // num/i가 같지 않으면 ++
        }
        i++;
    }
    
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i < number + 1; i++){
        cout << divisor_num(i) << " " ;
        if(limit < divisor_num(i))
            answer += power;
        else
            answer += divisor_num(i);   
    }
    
    return answer;
}