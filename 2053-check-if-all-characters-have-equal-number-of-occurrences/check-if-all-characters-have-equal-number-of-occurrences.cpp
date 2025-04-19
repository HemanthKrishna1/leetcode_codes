class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> x(26,0);
        for(auto &p:s){
            x[p-'a']++;
        }
        int val;
        for(auto &l:x){
            if(l>0){
                val=l;
                break;
            }

        }
         for(auto &l:x){
           if(l>0 && l!=val){
            return false;
           }

        }
        return true;
        
    }
};