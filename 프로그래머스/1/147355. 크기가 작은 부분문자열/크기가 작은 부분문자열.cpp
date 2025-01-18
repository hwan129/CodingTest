#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i < t.length() - p.length() + 1; i++){
        string str = "";
        for(int j = i; j < p.length() + i; j++){    // p 길이 만큼 t 가져오기
            str += t[j];
        }
        
        long long num = stoll(str);
        long long p_num = stoll(p);
        
        if(p_num >= num)
            answer++;
        
    }
    
    return answer;
}