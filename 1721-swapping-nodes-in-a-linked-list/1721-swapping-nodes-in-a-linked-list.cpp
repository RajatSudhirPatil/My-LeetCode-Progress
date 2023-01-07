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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        if(k>count) return head;
        if(!head || !head->next) return head;
        ListNode *f=head;
        ListNode *s=head;
        int n=k;
        while(k!=0){
            f=f->next;
            k--;
        }
        while(f){
            s=s->next;
            f=f->next;
        }
       //s=s->next;
        ListNode *l=head;
        n-=1;
        while(n!=0){
            l=l->next;
            n--;
        }
        int t=l->val;
        l->val=s->val;
        s->val=t;
        
        return head;
    }
    
};