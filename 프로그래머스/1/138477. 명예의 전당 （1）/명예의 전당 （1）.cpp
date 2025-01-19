#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    for(int i = 0; i < score.size(); i++){
        vector<int> today_score;
        for(int j = 0; j <= i; j++){
            today_score.push_back(score[j]);
        }
        sort(today_score.begin(), today_score.end());
        if(i < k)
            answer.push_back(today_score[0]);
        else
            answer.push_back(today_score[today_score.size() - k]);
        // for(int j = 0; j < today_score.size(); j++)
        //     cout << today_score[j] << " ";
        // cout << endl;
    }
    
    return answer;
}