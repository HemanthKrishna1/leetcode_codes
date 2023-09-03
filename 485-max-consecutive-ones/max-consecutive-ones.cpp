class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, cnt = 0;
        for(auto it: nums) {
            if(it == 1){
                cnt++;
            }else {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};