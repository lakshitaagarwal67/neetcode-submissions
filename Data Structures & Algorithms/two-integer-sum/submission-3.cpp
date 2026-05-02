class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            auto it = um.find(rem);
            if(it != um.end()){
                arr.push_back(it->second);
                arr.push_back(i);
                break;
            }

            um[nums[i]] = i;
        }
        return arr;
    }
};
