class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 || head->next==NULL)
            return head;
        ListNode *temp, *cur=head, *first;
        temp = new ListNode();
        stack<ListNode*> s;
        bool flag=true;
        while(cur!=NULL)
        {
            s.push(cur);
            cur = cur->next;
            if(s.size()==k)
            {
                while(s.size())
                {
                    temp->next = s.top();
                    temp = temp->next;
                    if(flag==true)
                    {
                        first = temp;
                        flag = false;
                    }
                    s.pop();
                }
                temp->next = cur;
            }
        }
        return first;
    }   
    
};
