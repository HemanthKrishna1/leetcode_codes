class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(st.contains(nums[i])) return true;
            st.insert(nums[i]);
        }
        return false;
    }
};