/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <vector>
#include <unordered_map> 
#include <time.h>
#include <iostream>

typedef struct List {
    int val;
    List* next;

}ListNode;

ListNode* node = NULL;
ListNode* head1 = NULL;
ListNode* head2 = NULL;

ListNode* addTwoNumbers( ListNode* l1,  ListNode* l2) 
{
    int carry = 0, sum = 0;
    ListNode* tmep = NULL, *head = NULL;
    while (l1 != NULL || l2 != NULL)
    {
        tmep = (ListNode*)malloc(sizeof(ListNode));
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        carry ? sum++ : sum;

        sum %= 10;
        if (!sum)
        {
            carry = 1;
            sum = 0;
        }

        tmep->val = sum;
        sum = 0;
        tmep->next = head;
        head = tmep;

    }
    return head;
}

void printList(ListNode** head)
{
    ListNode* temp = *head;
    while (temp != NULL)
    {
        printf("%d  ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
void Insert(int len, int data[], ListNode** head)
{
    ListNode* temp, * temp1;
    for (int i = 0; i < len; i++)
    {
        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));

        newNode->val = data[i];
        newNode->next = NULL;

        //check for first insertion
        if (*head == NULL) {
            *head = newNode;
        }
        else
        {
            ListNode* current = *head;
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
}

int main()
{
    int L[3] = { 2,4,3 };
    int R[3] = { 5,6,4 };

    Insert(3, L, &head1);
    Insert(3, R, &head2);
   
    ListNode* newNode = addTwoNumbers(head1, head2);
    printList(&newNode);
    return 0;
}