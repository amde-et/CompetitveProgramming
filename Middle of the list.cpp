class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp  = head;
        int c = 0;
        while(temp!=NULL)
        {
            c++;
            temp = temp->next;
        }
        int mid = c%2==0?c/2+1:c/2+1;
        temp = head;
        while(mid>1)
        {
            temp = temp->next;
            mid--;
        }
        return temp;
    }
};
