#include <stdio.h>
#include <malloc.h>
#include <assert.h>

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);


int main(void)
{


	return 0;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    struct ListNode* n1 = l1;
    struct ListNode* n2 = l2;
    struct ListNode* n3 = NULL;
    struct ListNode* newhead = NULL;
    while (n1 && n2)
    {

        if (n1->val < n2->val)
        {
            if (n3 == NULL)
            {
                newhead = n3 = n1;
            }
            else
            {
                n3->next = n1;
                n3 = n1;
            }
            n1 = n1->next;
        }
        else
        {
            if (n3 == NULL)
            {
                newhead = n3 = n2;
            }
            else
            {
                n3->next = n2;
                n3 = n2;
            }
            n2 = n2->next;
        }


    }

    if (n1)
        n3->next = n1;
    if (n2)
        n3->next = n2;
    return newhead;
}