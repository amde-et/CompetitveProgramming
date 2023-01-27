class Solution {
    public:
    ListNode* middleNode(ListNode* head) {
        ListNode* node1=head;             
        ListNode* node2=head;             

        while(node2!=NULL && node2->next!=NULL) 
        {
            node1=node1->next;            
            node2=node2->next->next;      
        }                                  

        return node1;
    }
};
