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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *f=new ListNode(NULL);
        ListNode *s=new ListNode(NULL);
        f->next=head;
        s->next=head;
        if(!head) return head;
        if(!head->next) return NULL;
        while(f->next && f->next->next){
            f=f->next->next;
            s=s->next;
        }
        s->next=s->next->next;
        return head;
    }
};