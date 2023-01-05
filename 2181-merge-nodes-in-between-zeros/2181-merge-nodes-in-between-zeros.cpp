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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *s=head->next;
        ListNode *f=head->next;
        ListNode *temp=head->next;
        int sum=0;
        while(f->next){
            f=f->next;
            if(f->next==NULL){
                s->next=NULL;
                return temp;
            }
            if(f->val==0){
                f=f->next;
                s->next=f;
                s=s->next;
            }
            else s->val+=f->val;
        }
        return temp;
    }
};