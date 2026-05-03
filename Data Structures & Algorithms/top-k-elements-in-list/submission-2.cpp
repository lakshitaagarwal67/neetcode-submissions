class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> res;
       unordered_map<int,int> um;
       for(int n : nums){
        um[n]++;
       }

       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;
       for(auto it : um){
        heap.push({it.second, it.first});
        if(heap.size() > k){
            heap.pop();
        }
       }

        for(int i=0;i<k;i++){
           res.push_back(heap.top().second); 
           heap.pop();
        }

        return res;

    }
};
