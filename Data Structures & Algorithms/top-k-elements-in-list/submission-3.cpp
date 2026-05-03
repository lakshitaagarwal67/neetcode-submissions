class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int> um;
      vector<int> res;
      for(int n : nums){
        um[n]++;
      }

      vector<vector<int>> freq(nums.size() +1);
      for(auto it : um){
        freq[it.second].push_back(it.first);
      }

      for(int i=freq.size()-1;i>0;i--){
            for(int val : freq[i]){
                res.push_back(val);
                if(res.size() == k){
                    return res;
                }
            }
      }
    return res;
    }
};
