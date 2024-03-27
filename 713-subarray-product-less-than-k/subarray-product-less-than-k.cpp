class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0;
        int product = 1;
        int l = 0;
        for(int r=0;r<nums.size();r++){
            product*=nums[r];
            while(l<=r && product >= k){
                product/=nums[l];
                l++;
            }
            ans+=(r-l+1);
        }
        return ans;
    }
};