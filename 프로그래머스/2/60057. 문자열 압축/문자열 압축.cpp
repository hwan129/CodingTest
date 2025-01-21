#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 정해진 순서에 따라 잘라야 함
// 2, 3, 4, 5, 6

int solution(string s) {
    int answer = 9999;
    
    if(s.length() == 1)
        return 1;
    
    for(int i = 1; i <= s.length()/2; i++){ // 돌면서 자를 갯수
            int j = 0;  // 자를 자리
            bool correct = false;
            int count = 0;  // 잘린 문자열 종류 갯수
            int strSize = 0;    // 결과 길이
            
            vector<string> str;   // 잘린 각 문자열
            vector<int> strNum(s.length()/i, 1);   // 잘린 각 문자열 종류 개수
            bool pre = false;   // 2번 같았는가?
            int sameCount = 0; // 2번 같은 횟수
            
            while(j < s.length()){  // 잘라서 비교
                string a;   // 자른걸 넣은 문자열
                
                if(j+i > s.length()){   // 문자열 최대 길이를 넘을 경우
                    strSize += s.length() - j;
                    break;
                }
                    
                
                for(int k = j; k < j + i; k++){
                    a += s[k];
                }
                
                if(count == 0){     // 처음거 넣기
                    str.push_back(a);
                    count++;
                }
                else if(a != str[count - 1]){   // 바로 전과 다르면 문자 추가
                    count++;    // 문자 갯수 ++
                    str.push_back(a);
                    pre = false;
                } else{     // 전과 같으면
                    if(!pre){   // 2번 연속 이상이 아니면
                        sameCount++;
                    }
                    strNum[count - 1]++;
                    pre = true;   
                }
                j += i;
            }
        // cout << i << " ";
            for(int k = 0; k < str.size(); k++){    // 나눠진거 합치기
                // cout << to_string(strNum[k]) << str[k];
                
                strSize += str[k].length(); // 합치면서 길이 더하기
            }
        for(int t = 0; t < strNum.size(); t++){
                    if(strNum[t] > 1){  // 숫자 더하기
                        strSize += to_string(strNum[t]).length();
                    }
                }
        // cout << " " << strSize << endl;
            if(strSize< answer){    // 젤 작은거 구하기
                answer = strSize;
            }    
    }
    
    return answer;
}