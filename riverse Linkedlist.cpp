class Solution {
public:
    ListNode* reverseList(ListNode* head) { 
        ListNode *p,*q,*r;
        p=head;  
        q=NULL;
        r=NULL;
        while(p)  
        {
            r=q;  
            q=p;
            p=p->next;
            q->next=r;  
        }
        head=q;
        return head;
    }
};  
