#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    // today - 오늘, terms - 약관 종류와 유효기간, privacies - 개인정보 날짜, 약관 종류
    vector<int> answer;
    
    vector<string> cur_date; // 현재 날짜를 차례대로 넣음
    string str1 = "";
    for(int i = 0; i < today.length(); i++){
        if(today[i] == '.'){
            cur_date.push_back(str1);
            str1 = "";
        } else{
            str1 += today[i];
        }
    }
    cur_date.push_back(str1);
    
    int cur_year = stoi(cur_date[0]);
    int cur_month = stoi(cur_date[1]);
    int cur_day = stoi(cur_date[2]);
    
    string type[terms.size()][2];   // 약관과 유효 기간 분리
    for(int i = 0; i < terms.size(); i++){
        string str2 = "";
        for(int j = 0; j < terms[i].length(); j++){ // i번째 문자열의 길이만큼. 약관과 유효 기간 분리
            if(terms[i][j] == ' '){
                type[i][0] = str2;
                str2 = "";
            } else{
                str2 += terms[i][j];    // 약관 문자    
            }
        }
        type[i][1] = str2;  // 약관 기간
    }
    
    for(int i = 0; i < privacies.size(); i++){  // privacies 갯수
        string str2 = "";
        vector<string> date;    // 날짜 넣기
        for(int j = 0; j < privacies[i].length(); j++){ // i번째 문자열의 길이만큼. 날짜와 약관 정보 분리
            if(privacies[i][j] == '.' || privacies[i][j] == ' '){
                date.push_back(str2);
                str2 = "";
            } else{
                str2 += privacies[i][j];
            }
        }
        
        int year = stoi(date[0]);
        int month = stoi(date[1]);
        int day = stoi(date[2]);
        
        for(int j = 0; j < terms.size(); j++){
            if(type[j][0] == str2){
                month += stoi(type[j][1]);
            }
        }
        
        while(month > 12){
            year++;
            month -= 12;
        }
        
        cout << "cur_date : " << cur_year << " " << cur_month << " " << cur_day << endl;
        cout << "date : " << year << " " << month << " " << day << endl;
        
        // 현재년도보다 작: 파기, 현재 년도와 같다: 월 비교, 크다: 유지
        if( cur_year > year){
            answer.push_back(i+1);
        }   else if(cur_year == year && cur_month > month){ // 현재 달보다 작다: 파기, 같다: 일 비교, 크다: 유지
            answer.push_back(i+1);   
        } else if(cur_year == year && cur_month == month && cur_day >= day){
            answer.push_back(i+1);
        }
            
    }
    return answer;
}