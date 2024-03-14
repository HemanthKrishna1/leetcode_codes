class Solution {
public:
    int solve(vector<int> nums, int goal){
        if(goal < 0) {
            return 0;
        }
        int left = 0, current_sum = 0, res = 0;
        for(int right=0;right<nums.size();right++){
            current_sum += nums[right];
            while(current_sum > goal){
                current_sum -= nums[left];
                left++;
            }
            res += right - left + 1;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums, goal) - solve(nums, goal -1);
    }
};