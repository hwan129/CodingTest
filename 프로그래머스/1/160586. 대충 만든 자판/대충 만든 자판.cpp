#include <string>
#include <iostream>
#include <vector>

using namespace std;

// keymap을 모두 이용해서 해야함
// keymap에서 현재 타겟을 가장 빨리 칠 수 있는 것 고르기
vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    
    for(int i = 0; i < targets.size(); i++){    // 타겟 문자열 갯수
        int allCount = 0; // 타겟의 i번째 문자열의 클릭 갯수
        for(int j = 0; j < targets[i].length(); j++){  // 타겟 i번째 문자열의 길이
            int min = 9999; // 가장 짧은 count
            int count = 1;
            for(int k = 0; k < keymap.size(); k++){ // keymap의 문자열 갯수
                for(int t = 0; t < keymap[k].length(); t++){    // keymap의 i번째 문자열의 길이
                    if(keymap[k][t] == targets[i][j]){
                        if(count < min){
                            min = count;
                        }       
                        break;
                    }
                    count++;
                }
                count = 1;       
            }
            if(min == 9999){
                allCount = -1;
                break;
            } else
                allCount += min;
        }
        answer.push_back(allCount);
    }
    
    return answer;
}