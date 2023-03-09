/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *f=head;
        ListNode *s=head;
        while(f!=NULL && f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s){
                s=head;
                while(s!=f){
                    s=s->next;
                    f=f->next;
                }
                return s;
            }
        }
        return NULL;
    }
};