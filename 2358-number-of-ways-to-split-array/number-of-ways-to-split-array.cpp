class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long rs = 0;
        long long ls = 0;
        for(auto it: nums){
            rs+=it;
        }
        int cnt = 0;
        for(int i=0;i<nums.size()-1;i++){
            ls+=nums[i];
            rs-=nums[i];
            if(ls>=rs) cnt++;
        }
        return cnt;
    }
};