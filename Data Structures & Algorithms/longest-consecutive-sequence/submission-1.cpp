class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(int n : nums){
            hashSet.insert(n);
        }
        int longestLength = 0;
        for(int n : nums){
            if(hashSet.find(n - 1) == hashSet.end()){
                int len = 1;
                while(hashSet.find(n + len) != hashSet.end()){
                    len ++;
                }
                longestLength = max (longestLength,len);
            }
        }

        return longestLength;
    }
};
