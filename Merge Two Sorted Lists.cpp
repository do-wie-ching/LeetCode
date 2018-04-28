class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
       
       if(!l1)
           return l2;
       else if(!l2)
           return l1;
           
       ListNode* tem=NULL;
       
      	if(l1->val<l2->val)
			{
				tem=l1;
				l1=l1->next;
			}
		else
			{
				tem=l2;
				l2=l2->next;
			}
        ListNode* Pn=tem;

        while( l1 && l2)
        {
            if(l1->val<l2->val)
			{
				Pn->next=l1;
				l1=l1->next;
			}
			else
			{
				Pn->next=l2;
				l2=l2->next;
			}
			Pn=Pn->next;
        }
    	l1!=NULL ? Pn->next=l1 : Pn->next=l2;
        return tem;
    }
};
