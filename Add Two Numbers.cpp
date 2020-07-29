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
typedef struct ListNode {
    int val;
    ListNode* next;
 
}NODE;

NODE* node=NULL, *head =NULL;

NODE* Insert(int len,int data[])
{
    NODE* temp, *temp1;
    for (int i = 0; i < len; i++)
    {
        NODE* newNode = (NODE*)malloc(sizeof(NODE));

        newNode->val = data[i];
        newNode->next = NULL; 

        //check for first insertion
        if (head == NULL) {
            head = newNode;
        }
        else
        {
            NODE* current = head;
            while (true) 
            { 
                if (current->next == NULL)
                {
                    current->next = newNode;
                    break; // Change 3
                }
                current = current->next;
            }
        }
    }
    return node;
}

int main() 
{
    int a[5] = { 1,2,3,4,5 };

    Insert(5, a);

    NODE* temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->val);
        temp = temp->next;
    }

    return 0;
}