#include <iostream>
#include <string>
#include <vector>

using namespace std;

string aya = "aya", ye = "ye", woo = "woo", ma = "ma";  // 이거 4개 이외에는 안됨

string erase_str(string str){
    if(str.find(aya) != std::string::npos ){
            str.replace(str.find(aya), aya.length(), "1"); 
        // 1: 바뀔 단어 위치, 2: 바뀔 단어 길이, 3: 바꿀 단어
        } else if(str.find(ye) != std::string::npos ){
            str.replace(str.find(ye), ye.length(), "2"); 
        }else if(str.find(woo) != std::string::npos ){
            str.replace(str.find(woo), woo.length(), "3"); 
        }else if(str.find(ma) != std::string::npos ){
            str.replace(str.find(ma), ma.length(), "4"); 
        }
    
    return str;
}

int solution(vector<string> babbling) {
    int answer = 0;
    
    int i = 0;
    while(babbling.size() > i){
        int str_length = babbling[i].length();
        babbling[i] = erase_str(babbling[i]);   // 관련 문자 제거
        if(str_length == babbling[i].length()){ // 길이가 변하지 않는다 -> 단어가 없다
            bool ans = false;
            if(babbling[i].length() == 1){  // 길이가 하나인 경우
                if(babbling[i][0] > '0' && babbling[i][0] <= '4'){
                    ans = true;
                    cout << babbling[i][0] << "!";
                }
            } else
                for(int j = 0; j < babbling[i].length() - 1; j++){
                    // cout << babbling[i][j];
                    if(babbling[i][j] > '0' && babbling[i][j] <= '4'){ // 숫자 범위
                        if(babbling[i][j + 1] == babbling[i][j]){   // 같은 숫자가 연속인가?
                            ans = false;
                            break;   
                        }
                        else
                            ans = true;
                    } else{
                        ans = false;
                        break;  // 1 ~ 4가 아닌게 있다면 X
                    }
                    
                }
            cout << babbling[i] << endl;
            if(babbling[i][babbling[i].length() - 1] < '0' || babbling[i][babbling[i].length() - 1] > '4') // 마지막 글자 검사(위에서 검사 안함)
                ans = false;
            if(ans)
                answer++;
            i++;
        }
    }
    
    return answer;
}