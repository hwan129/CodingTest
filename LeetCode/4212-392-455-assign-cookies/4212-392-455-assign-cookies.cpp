#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0, order = 0; 
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(g.size() > count && s.size() > order){
            if(g[count] <= s[order]) count++;

            order++;

        }

        return count;
    }
};