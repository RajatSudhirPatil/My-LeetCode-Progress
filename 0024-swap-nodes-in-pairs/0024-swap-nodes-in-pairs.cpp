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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        if(!head->next) return head;
        ListNode* f=head;
        while(f!=NULL&&f->next!=NULL){
            int temp=f->val;
            f->val=f->next->val;
            f->next->val=temp;
            f=f->next->next;
        }
        return head;
    }
};