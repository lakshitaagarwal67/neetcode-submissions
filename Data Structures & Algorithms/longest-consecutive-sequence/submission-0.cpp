class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int n:nums){
            um[n]++;
        }

        int res = 0;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int streak =0;
            while(um.find(num) != um.end()){
                streak++;
                num++;
            }
            res = max(res,streak);
        }

        return res;
    }
};
