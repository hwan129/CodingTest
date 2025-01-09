#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    string str_x = to_string(x);
    int y = 0;
    for(int i = 0; i < str_x.length(); i++)
        y += str_x[i] - '0';
    
    cout << y;
    if(x % y != 0) answer = false;
    
    return answer;
}