/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res, st;
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        for(int i=res.size()-1;i>=0;i--){
            auto val = res[i];
            while(!st.empty() && st.back() <= res[i]) st.pop_back();
            res[i] = st.empty() ? 0 : st.back();
            st.push_back(val);
        }
        return res;
    }
};