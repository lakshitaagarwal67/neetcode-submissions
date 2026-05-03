class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int product = 1;
        int isZero = 0;
        for(int n : nums){
            if(n != 0){
                product *= n;
            }
            else{
                isZero ++;
            }
        }

        if(isZero > 1){
            return vector<int>(nums.size(),0);
        }

        for(int i=0;i<nums.size();i++){
            if(isZero > 0){
                res[i] = (nums[i] == 0)? product : 0;
            }
            else {
                res[i] = product/ nums[i];
            }
        }

        return res;
    }
};
