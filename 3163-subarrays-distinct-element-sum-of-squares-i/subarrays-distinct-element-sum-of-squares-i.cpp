class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            map<int,int> mpp;
            for(int j=i;j<nums.size();j++){
                mpp[nums[j]]++;
                ans+= (mpp.size() * mpp.size());
            }
        }
        return ans;
    }
};