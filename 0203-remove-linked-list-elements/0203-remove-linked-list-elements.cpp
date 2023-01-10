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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        while(head && head->val==val) head=head->next;
        ListNode *f=head;
        ListNode *s=nullptr;
        while(f){
            if(f->val==val){
                s->next=f->next;
                f=f->next;
            }
            else{
                s=f;
                f=f->next;
            }
        }
        return head;
    }
};