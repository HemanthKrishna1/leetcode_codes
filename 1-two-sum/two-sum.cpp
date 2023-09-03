class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(mpp.find(target - nums[i])!=mpp.end()){
                ans[0] = mpp[target - nums[i]];
                ans[1] = i;
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};