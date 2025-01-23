class Solution {
public:
    int countPrimes(int n) {
        int answer = 0;
        vector<bool> prime(n, true);

        for(int i = 2; i < n; i++){
            if(prime[i]){
                answer++;
                for(int j = i; j < n; j += i){
                    prime[j] = false;
                }
            }
        }

        return answer;
    }
};