class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int j = i+1;
            int k = n-1;
            while(j<k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> sub;
                    sub.push_back(nums[i]);
                    sub.push_back(nums[j]);
                    sub.push_back(nums[k]);
                    ans.push_back(sub);

                    while(j<k && nums[j] == sub[1]) j++;
                    while(j<k && nums[k] == sub[2]) k--;
                }else if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }else {
                    j++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};