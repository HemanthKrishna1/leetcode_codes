class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int number = nums.size()/2;
        map<int,int> mpp;
        for(auto it: nums) {
            mpp[it]++;
            if(mpp[it] > number) break;
        }
        for(auto it: mpp) {
            if(it.second > number) return it.first;
        }
        return 1;
    }
};