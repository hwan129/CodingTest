#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(int i = 0; i < skill_trees.size(); i++){ // 벡터 전체
        int order = true; // 순서 맞는지
        int count = 0; // skill과 같은 것 개수
        for(int j = 0; j < skill_trees[i].length(); j++){ // 벡터의 각 string
            bool same = false; // 같은 것이 나왔는가?
            
            for(int k = 0; k < skill.length(); k++){ // 주어진 스킬
                if(skill[k] == skill_trees[i][j]){  // 스킬이 있나?
                    if(skill[count] != skill_trees[i][j]){ // 순서가 맞나?
                        order = false;
                    }
                    count++;
                    break;
                }
            }
        }
        cout << endl;
        if(order == true) answer++;
    }
    return answer;
}