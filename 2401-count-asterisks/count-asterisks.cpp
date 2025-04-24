class Solution {
public:
    int countAsterisks(string s) {
        int c=0;
        int p=0;
        for(auto l:s){
            if(l=='*' && p==0){
                c++;
            }
            if(l=='|'){
                p^=1;
            }
        }
        return c;
        
    }
};