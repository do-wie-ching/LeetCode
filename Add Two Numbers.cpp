/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
    int sum=0,num=0;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        if(!(l1 || l2) && num==0)
            return NULL;
        
        sum=0;
        
        sum+=((!l1 ? 0:l1->val)+(!l2 ? 0:l2->val));     
        sum+=num;
        
        ListNode *p=new ListNode(sum%10);
        num=sum/=10;
           
        p->next=addTwoNumbers(l1==NULL ? NULL : l1->next ,l2==NULL ? NULL : l2->next);
        return p;
    }
};
