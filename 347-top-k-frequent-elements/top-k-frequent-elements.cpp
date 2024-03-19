class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> res(nums.size()+1);
        map<int,int> mpp;
        for(auto &it : nums) {
            mpp[it]++;
        }
        for(auto it: mpp){
            res[it.second].push_back(it.first);
        }
        vector<int> sol;
        int last = res.size()-1;
        for(int j=last;j>=0;j--){
            if(res[j].size() > 0){
                for(int i=0;i<res[j].size();i++){
                    sol.push_back(res[j][i]);
                    if(sol.size() == k) return sol;
                }
            }
        }
        return sol;
    }
};