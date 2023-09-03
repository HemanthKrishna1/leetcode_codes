class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int ans = 0;
        while(i<n) {
            int j = i;
            int ans2 = 0;
            while(j<n && nums[j]==1) {
                ans2++;
                j++;
            }
            i=j;
            ans = max(ans, ans2);
            i++;
        }
        return ans;
    }
};