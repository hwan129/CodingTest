#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    // N : 전체 스테이지 개수, stages : 사용자가 멈춰있는 스테이지. stages.size() : 사람 수
    // 실패율(스테이지에 있으나 못깬 사용자/스테이지 도달한 사용자)
    vector<int> answer; // 실패율이 높은 스테이지부터 내림차순(스테이지의 번호)
    vector<double> user(N + 1, 0);   // 각 스테이지당 유저 수. 성공한 사람은 N+1에 존재
    int allUser = stages.size();
    
    for(int i = 0; i < allUser; i++){
        user[stages[i]-1]++;    // 스테이지 - 1
    }
    
    vector<pair <int, double>> failRate;
    for(int i = 0; i < user.size(); i++){
        cout << user[i] << "/" << allUser << " ";
        if(user[i] == 0){
           failRate.push_back({i, user[i]}); 
        }else{
           failRate.push_back({i, user[i]/allUser}); 
        }
        allUser -= user[i];
    }
    
    // 실패율 기준 내림차순 정렬, 실패율이 같으면 스테이지 번호 오름차순
    sort(failRate.begin(), failRate.end() - 1, [](pair<int, double> a, pair<int, double> b) {
        if (a.second == b.second) {
            return a.first < b.first; // 스테이지 번호 오름차순
        }
        return a.second > b.second; // 실패율 내림차순
    });
    
    for(int i = 0; i < failRate.size() - 1; i++){
        answer.push_back(failRate[i].first + 1);
    }
    
    return answer;
}