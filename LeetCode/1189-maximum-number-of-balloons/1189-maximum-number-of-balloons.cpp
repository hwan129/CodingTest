class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int alphabet[26] = {0}; // a[0] - 1, b[1] - 1, l[11] - 2, o[14] - 2, n[13] - 1
        int num[5] ={0, 1, 11, 14, 13};

        for(int i = 0; i < text.length(); i++){
            alphabet[text[i] - 'a']++;
        }

        int count = 0;
        while(1){
            if(alphabet[0] > count && alphabet[1] > count && alphabet[11]/2 > count && alphabet[14]/2 > count && alphabet[13] > count) count++;
            else break;
        }


        return count;
    }
};