class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = nums[n-1] + nums[n-2] + nums[n-3];
        for(int i=0;i<nums.size();i++){
            int p1 = i +1;
            int p2 = nums.size()-1;
            while(p1<p2){
                int sum = nums[i] + nums[p1] + nums[p2];
                if(abs(sum-target) < abs(ans-target)){
                    ans = sum;
                }
                if(sum<target){
                    p1++;
                }else if (sum > target){
                    p2--;
                }else{
                    return ans;
                }
            }
        }
        return ans;
    }
};