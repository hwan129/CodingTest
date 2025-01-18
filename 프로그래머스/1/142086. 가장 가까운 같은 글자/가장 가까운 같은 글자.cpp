#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> count(26, 0);
    vector<int> location(26, -1);   // 현재 문자와 가까운 글자 위치
    
    for(int i = 0; i < s.length(); i++){
        int num = s[i] - 'a';
        answer.push_back(location[num]);    // 현재 문자와 가까운 글자 위치 넣기
        for (int j = 0; j < location.size(); j++) {    // 위치++
            if(location[j] != -1)
                location[j]++;
        }
        cout << endl;
        location[num] = 1;
    }
    
    return answer;
}