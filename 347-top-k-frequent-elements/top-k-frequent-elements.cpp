class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mpp;
        for(auto &it: nums){
            mpp[it]++;
        }
        vector<vector<int>> counts(nums.size()+1);
        for(auto it: mpp){
            counts[it.second].push_back(it.first);
        }

        for(int i=counts.size()-1;i>=0;i--){
            for(int j=0;j<counts[i].size();j++){
                ans.push_back(counts[i][j]);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};