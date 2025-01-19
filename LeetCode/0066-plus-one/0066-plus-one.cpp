class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool up = false;
        digits[digits.size() - 1]++;

        for(int i = digits.size() - 1; i >= 0; i--){    // 1더하고 10이 될 경우
            if(up){
                digits[i]++;
                up = false;
            }
            if(digits[i] > 9){
                digits[i] = 0;
                up = true;
            }
            cout << digits[i] << " ";
        }
        if(up){ // 첫번째 자리
            // digits.push_back(digits[digits.size() - 1]);
            // for(int i = digits.size() - 2; i > 0; i--){
            //     digits[i] = digits[i - 1];
            // }
            // digits[0] = 1;
            digits.insert(digits.begin(), 1);   // 맨 앞에 추가
        }

        return digits;
    }
};