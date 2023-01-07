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
    int pairSum(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        if(count%2!=0) return -1;
        ListNode *f=head;
        ListNode *s=head;
        while(f->next && f->next->next){
            s=s->next;
            f=f->next->next;
        }
        s=s->next;
        ListNode *newhead=NULL;
        while(s){
            ListNode *next=s->next;
            s->next=newhead;
            newhead=s;
            s=next;
        }
        ListNode *s1=head;
        ListNode *s2=newhead;
        int max=-1;
        while(s2){
            int sum=s1->val+s2->val;
            if(sum>=max) max=sum;
            s1=s1->next;
            s2=s2->next;
        }
        return max;
    }
};