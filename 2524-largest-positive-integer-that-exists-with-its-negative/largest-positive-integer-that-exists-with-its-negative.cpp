class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int p1=0;
        int p2=nums.size()-1;
        int ans = INT_MIN;
        while(p1<p2){
            if(nums[p1] + nums[p2] == 0){
                ans = max(ans, nums[p2]);
                p1++;
                p2--;
            }else if (nums[p1] + nums[p2] < 0){
                p1++;
            }else{
                p2--;
            }
        }
        return ans == INT_MIN ? -1 : ans;
    }
};