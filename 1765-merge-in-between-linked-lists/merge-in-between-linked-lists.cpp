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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ans = list1;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* tail = list2;
        while(tail->next){
            tail=tail->next;
        }
        while(a-- > 1){
            temp1=temp1->next;
        }
        ListNode* tail2 = list1;
        while(b-- >= 0){
            tail2=tail2->next;
        }
        temp1->next = list2;
        tail->next = tail2;
        return ans;
    }
};