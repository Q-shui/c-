#include "ListNode.h"


//����һ��ռ�
ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	
	node->_next = NULL;
	node->_prev = NULL;
	node->_data = x;

	return node;

}
// �������������ͷ���.
ListNode* ListCreate()
{
	ListNode* node = BuyListNode(-1);

	node->_prev = node;
	node->_next = node;

	return node;

}
// ˫����������
void ListDestory(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur = pHead->_next;

	while (cur != pHead)
	{
		ListNode* tmp = cur->_next;
		free(cur);
		cur = tmp;;
	}

	free(pHead);
	pHead = NULL;
}
// ˫�������ӡ
void ListPrint(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur = pHead->_next;

	while (cur != pHead)
	{
		printf("%d->", cur->_data);
		cur = cur->_next;
	}

	printf("\n");

}
// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* newnode = BuyListNode(x);
	ListNode* tail = pHead->_prev;

	newnode->_prev = tail;
	tail->_next = newnode;

	newnode->_next = pHead;
	pHead->_prev = newnode;
	

}
// ˫������βɾ
void ListPopBack(ListNode* pHead)
{
	assert(pHead);

	ListNode* tail = pHead->_prev;
	ListNode* tailPrev = tail->_prev;

	tailPrev->_next = pHead;
	pHead->_prev = tailPrev;

	free(tail);


}
// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* newnode = BuyListNode(x);
	ListNode* head = pHead->_next;

	pHead->_next = newnode;
	newnode->_prev = pHead;
	newnode->_next = head;
	head->_prev = newnode;
	
}
// ˫������ͷɾ
void ListPopFront(ListNode* pHead)
{
	assert(pHead);

	ListNode* head = pHead->_next;
	ListNode* newhead = head->_next;

	pHead->_next = newhead;
	newhead->_prev = pHead;

	free(head);


}
// ˫���������
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* cur = pHead->_next;

	while (cur != pHead)
	{
		if (cur->_data == x)
			return cur;
		
		cur = cur->_next;
	}

	return NULL;

}
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);

	ListNode* newnode = BuyListNode(x);
	ListNode* posPrev = pos->_prev;

	posPrev->_next = newnode;
	newnode->_prev = posPrev;
	newnode->_next = pos;
	pos->_prev = newnode;

}
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
	assert(pos);

	ListNode* posPrev = pos->_prev;

	posPrev->_next = pos->_next;
	pos->_next->_prev = posPrev;

	free(pos);

}