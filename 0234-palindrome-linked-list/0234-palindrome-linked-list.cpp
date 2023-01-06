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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode *f=head;
        ListNode *s=head;
        ListNode *d=head;
        while(f->next && f->next->next){
            f=f->next->next;
            s=s->next;
        }
        //s = mid;
        s=s->next;
        
        ListNode *newhead=NULL;
        while(s!=NULL){
            ListNode *nxt=s->next;
            s->next=newhead;
            newhead=s;
            s=nxt;
        }
        ListNode *s2=newhead;
        while(s2){
            if(d->val!=s2->val) return false;
            s2=s2->next;
            d=d->next;
        }
        return true;
    }
};