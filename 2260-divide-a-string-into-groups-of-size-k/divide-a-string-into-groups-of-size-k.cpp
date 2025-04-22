class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string p="";
        int c=0;
        for(int i=0;i<s.length();i++){
            p+=s[i];
            c++;
            if(c==k){
                //p+=s[i];
                ans.push_back(p);
                p="";
                c=0;
            }
            
        }
        //cout<<p<<" "<<k<<" "<<p.length();
        if(p.length()){
            int n=p.length();
        for(int i=0;i<k-n;i++){
            p+=fill;
        }
        //cout<<p<<"\n";
        ans.push_back(p);}
        return ans;
        
    }
};