class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            auto it = um.find(complement);
            if (it != um.end()) {
                return {it->second, i};   // it->second < i, so order is correct
            }
            um[nums[i]] = i;
        }
        return {};
    }
};
