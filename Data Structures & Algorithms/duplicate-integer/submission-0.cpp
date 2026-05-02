class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> isPresent;
        for(int x : nums){
            if(!isPresent.insert(x).second) return true;
        }

        return false;
    }
};