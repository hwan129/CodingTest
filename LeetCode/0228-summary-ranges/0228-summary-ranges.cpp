class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        
        if (nums.empty()) return answer; // 배열이 비어있을 경우 처리

        int start = nums[0], fin = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] + 1 == nums[i]){ // 전에 것과 연속
                fin = nums[i];
            }
            else{   // 연속 X
                if(start == fin)
                    answer.push_back(to_string(start));
                else{
                    string a = to_string(start) + "->" + to_string(fin);
                    answer.push_back(a);
                }
                start = nums[i];
                fin = nums[i];
            }
        }

        if(start == fin)
            answer.push_back(to_string(start));
        else{
            string a = to_string(start) + "->" + to_string(fin);
            answer.push_back(a);
        }

        return answer;
    }
};