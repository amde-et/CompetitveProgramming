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
        vector<int>a1;
        
        ListNode* i=head,*j=head;
        
        while(j&&j->next)
        {
            a1.push_back(i->val);
            i=i->next;
            j=j->next->next;
        }
        int ans=INT_MIN;
        int index=0;
        while(i)
        {
            cout<<i->val<<endl;
            ans=max(ans,a1[a1.size()-index-1]+i->val);
            i=i->next;
            index++;
        }
        return ans;
    }
};
