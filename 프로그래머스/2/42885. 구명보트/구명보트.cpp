#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end(), greater<int>()); // 내림차순 정렬
    
    for(int i = 0; i < people.size(); i++){
        if(people[i] + people[people.size() - 1] > limit && i != people.size() - 1){
            // 두명을 했는데 limit을 넘는다 : 한명만 타
            answer++;
        } else{
            // 두명을 했는다 limit을 안넘어 : 두명 타
            people.pop_back();
            answer++;
        }
    }
    
    // for(int i = 0; i < people.size(); i++)
    //     cout << people[i] << " ";
    return answer;
}