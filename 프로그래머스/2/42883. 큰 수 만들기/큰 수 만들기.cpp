#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 가장 큰 수를 찾고 그 앞의 작은 것들을 없애자

string solution(string number, int k) {
    int max = 0;
    for(int i = 0; i < number.length(); i++){
        if(number[max] < number[i]){
            max = i;
        }
    }
    
    bool a = false;
    
    for(int i = 0; i < k; i++){ // 없애야 되는 수만큼. 
        int min = 0;
        if(min < max){
            for(int j = 0; j < max; j++){   
                // 가장 큰 수의 앞에서 가장 작은 수 찾기
                if(number[min] > number[j]){
                    min = j;
                }
            }
            number.erase(min, 1); // min부터 1개만 지우기
            max--;
        } else if(min == max && a == false){
            for(int j = 1; j < number.length(); j++){
                if(number[j - 1] < number[j]){// 뒤의 수가 크면 지우기
                    number.erase(j - 1, 1);
                    j -= 2;
                    i++;
                    if(i == k)
                        break;
                }
            }
            i--;
            a = true;
        } else{
            number.erase(number.length() - 1, 1);
        }
    }
    
    return number;
}
