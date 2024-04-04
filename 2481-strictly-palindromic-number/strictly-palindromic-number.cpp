class Solution {
public:
    string rns(int n){
        std::string r;
        while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
        return r;
    }
    bool isStrictlyPalindromic(int n) {
        string rn = rns(n);
        int i = 0;
        int j = rn.length();
        while(i<j){
            if(rn[i]!=rn[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};