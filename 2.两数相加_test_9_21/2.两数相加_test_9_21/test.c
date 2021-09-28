#include <stdio.h>
#include <malloc.h>


 //Definition for singly-linked list.
struct ListNode 
{
    int val;
    struct ListNode *next;
};


int main(void)
{


	return 0;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* cur1 = l1;
    struct ListNode* cur2 = l2;

    while (cur2)
    {
        cur1->val = cur1->val + cur2->val;

        if (cur1->next == NULL && cur1->val >= 10)

        if (cur1->val >= 10)
        {
            cur1->next->val += 1;
            cur1->val %= 10;
        }

        cur1 = cur1->next;
        cur2 = cur2->next;
    }

    return l1;
}

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    struct ListNode* cur1 = l1;
//    struct ListNode* cur2 = l2;
//
//    while (cur2)
//    {
//        cur1->val = cur1->val + cur2->val;
//        
//        cur1 = cur1->next;
//        cur2 = cur2->next;
//    }
//
//    cur1 = l1;
//
//    while (cur1)
//    {
//        if (cur1->next == NULL && cur1->val >= 10)
//        {
//            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            newnode->val = 0;
//            newnode->next = NULL;
//        }
//            
//        if (cur1->val >= 10)
//        {
//            cur1->next->val += ((cur1->val) / 10);
//            cur1->val %= 10;
//        }
//    }
//
//    return l1;
//}


//int ListSize(struct ListNode* ps)
//{
//	int size = 0;
//	while (ps)
//	{
//		size++;
//		ps = ps->next;
//	}
//
//	return size;
//}
//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//	int size1 = ListSize(l1);
//	int size2 = ListSize(l2);
//
//	struct ListNode* longList = l1;
//	struct ListNode* shortList = l2;
//
//	if (size1 < size2)
//	{
//		struct ListNode* longList = l2;
//		struct ListNode* shortList = l1;
//	}
//	
//	struct ListNode* cur1 = longList;
//	struct ListNode* cur2 = shortList;
//
//	while (cur2)
//	{
//		cur1->val = cur1->val + cur2->val;
//
//		cur1 = cur1->next;
//		cur2 = cur2->next;
//	}
//
//	cur1 = longList;
//	
//	while (cur1)
//	{
//		if (cur1->next == NULL && cur1->val >= 10)
//		{
//			struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//			newnode->val = 0;
//			newnode->next = NULL;
//		}
//
//		if (cur1->val >= 10)
//		{
//			cur1->next->val += ((cur1->val) / 10);
//			cur1->val %= 10;
//		}
//	}
//
//	return longList;
//
//}
