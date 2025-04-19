class Solution {
public:
    bool isValid(string s) {
        // ({[]})
        stack<char> st;
        for(auto &l:s){
            if(l=='('||l=='{'||l=='['){
                st.push(l);
            }
            else{
                if(l==')' && (st.empty()||st.top()!='(')){
                    return false;
                }
                 if(l=='}' && (st.empty()||st.top()!='{')){
                    return false;
                }
                 if(l==']' && (st.empty()||st.top()!='[')){
                    return false;
                }
                st.pop();
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
        
    }
};