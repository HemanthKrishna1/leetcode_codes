class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int want = target - nums[i];
            if(mpp.find(want)!=mpp.end()){
                ans[0] = i;
                ans[1] = mpp[want];
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};