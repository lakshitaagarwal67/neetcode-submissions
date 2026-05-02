class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<pair<int,int>> res;
       vector<int> res_num;
       unordered_map<int, int> um;
       for(int n : nums){
        um[n]++;
       } // 1-> 1       2-> 2         3-> 3
       for(auto it : um){
        res.push_back({it.second, it.first});
       }

        // 3-> 3, 2 -> 2 , 1> 1
       sort(res.rbegin(), res.rend());
       int i=0;
       while(i < k){
            res_num.push_back(res[i].second);
            i++;
       }
       return res_num;
    }
};
