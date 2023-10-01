class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> st;
        for(int i=1;i<=k;i++) st.insert(i);
        int cnt = 0;
        // traverse ok
        for(int i=n-1;i>=0;i--){
            if(st.size() == 0) break;
            st.erase(nums[i]);
            cnt++;
        }
        return cnt;
    }
};