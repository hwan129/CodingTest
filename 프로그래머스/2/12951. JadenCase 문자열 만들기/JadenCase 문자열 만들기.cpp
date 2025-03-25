#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    bool first = true; // 다음이 첫 문자인가?
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            first = true;
            s[i] = ' ';
            continue;
        } else if(first){ // 첫 문자면
            if(s[i] >= '0' && s[i] <= '9'){   // 첫문자가 숫자
            } else{
                if(s[i] >= 'a' && s[i] <= 'z'){ //첫 문자가 소문자
                    s[i] = s[i] - 'a' + 'A';   
                }
            }
            first = false;
        } else{ // 첫문자가 아님. 숫자도 아님
            if(s[i] >= 'A' && s[i] <= 'Z'){ // 근데 대문자
                s[i] = s[i] - 'A' + 'a';
            }
        }
        
    }
    answer = s;
    return answer;
}