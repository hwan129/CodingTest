class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.length(); i++){
            if(s == goal){
                return true;
            }
            char temp = s[0];
            for(int j = 0; j < s.length() - 1; j++){
                s[j] = s[j + 1];
            }
            s[s.length() - 1] = temp;
        }
        return false;
    }
};