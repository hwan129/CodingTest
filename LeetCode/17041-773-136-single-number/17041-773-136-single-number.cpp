class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0;
        
        sort(nums.begin(), nums.end());
        while(count + 1 < nums.size()){
            if(nums[count] == nums[count + 1]){
                count += 2;
            } else break;
        }
        

        return nums[count];
    }
};