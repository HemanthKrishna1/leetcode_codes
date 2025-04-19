class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string p="";
        for(auto &x:words){
            p+=x;
            if(p.length()==s.length()){
                return p==s;
            }
        }
        cout<<p<<"\n";
        return p==s;
        
    }
};