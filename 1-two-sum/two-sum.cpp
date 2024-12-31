class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start= 0, end = nums.size() - 1;
        vector<int> ans(2,-1);
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int want = target - nums[i];
            if(mpp.find(want)!= mpp.end()){
                ans[0] = i;
                ans[1] = mpp[want];
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};