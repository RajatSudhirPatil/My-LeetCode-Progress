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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *f=head;
        ListNode *s=head;
        if(!head) return head;
        if(!head->next) return head;
        ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        //if(k>count) return head;
        while((k%count)!=0){
            f=f->next;
            k--;
        }
        while(f->next){
            s=s->next;
            f=f->next;
        }
        f->next=head;
        head=s->next;
        s->next=NULL;
        return head;
    }
};