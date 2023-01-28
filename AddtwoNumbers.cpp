class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* ptr=head;
        int add=0;
        int a, b, sum;
        while(l1!=NULL || l2!=NULL || add!=0) {
            if(l1!=NULL) {
                a=l1->val;
                l1=l1->next;
            }
            else {
                a=0;
            }
            if(l2!=NULL) {
                b=l2->val;
                l2=l2->next;
            }
            else {
                b=0;
            }
            sum=a+b+add;
            add=sum/10;
            ptr->next=new ListNode(sum%10);
            ptr=ptr->next;
        }
        return head->next;
    }
};
