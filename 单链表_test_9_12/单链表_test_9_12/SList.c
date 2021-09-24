#include "SList.h"

// ��̬����һ���ڵ�
SLTNode* BuySListNode(SLTDataType x)
{

	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	if (newnode == NULL)
	{
		printf("malloc fail\n");

		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;

}

// �������ӡ
void SListPrint(SLTNode* plist)
{

	SLTNode* cur = plist;

	while (cur != NULL)
	{
		printf("%d->", cur->data);

		cur = cur->next;

	}

	printf("NULL\n");

}

// ������β��
void SListPushBack(SLTNode** pplist, SLTDataType x)
{

	if (*pplist == NULL)
	{

		SLTNode* newnode = BuySListNode(x);

		*pplist = newnode;

	}
	else
	{

		SLTNode* tail = *pplist;

		while (tail->next != NULL)
		{

			tail = tail->next;

		}

		SLTNode* newnode = BuySListNode(x);

		tail->next = newnode;

	}


}

// �������ͷ��
void SListPushFront(SLTNode** pplist, SLTDataType x)
{

	//assert(pplist);

	SLTNode* newnode = BuySListNode(x);

	newnode->next = *pplist;
	*pplist = newnode;


}

// �������βɾ
void SListPopBack(SLTNode** pplist)
{

	assert(pplist);
	assert(*pplist);

	if ((*pplist)->next == NULL)
	{

		free(*pplist);
		(*pplist) = NULL;

	}
	else
	{

		SLTNode* tail = *pplist;

		while (tail->next->next)
		{

			tail = tail->next;

		}

		free(tail->next);
		tail->next = NULL;

	}

	////˫ָ������
	//assert(pplist);
	//assert(*pplist);
	//
	//if ((*pplist)->next == NULL)
	//{
	//
	//	free(*pplist);
	//	(*pplist) = NULL;
	//
	//}
	//else
	//{
	//	SLTNode* prev = (*pplist);
	//	SLTNode* tail = (*pplist);
	//	
	//	while (tail->next)
	//	{
	//
	//		prev = tail;
	//		tail = tail->next;
	//
	//	}
	//
	//	free(tail);
	//	prev->next = NULL;
	// }

}

// ������ͷɾ
void SListPopFront(SLTNode** pplist)
{

	assert(pplist);
	assert(*pplist);

	if ((*pplist)->next == NULL)
	{

		free(*pplist);
		*pplist = NULL;

	}
	else
	{

		SLTNode* tail = (*pplist)->next;

		free(*pplist);
		
		(*pplist) = tail;

	}

}

//��������
int SListSize(SLTNode* plist)
{

	int size = 0;

	SLTNode* cur = plist;

	while (cur->next)
	{

		size++;

		cur = cur->next;

	}

	return size + 1;

}

//�������Ƿ�Ϊ��
bool SListEmpty(SLTNode* plist)
{

	return plist == NULL;

}

// ���������
SLTNode* SListFind(SLTNode* plist, SLTDataType x)
{
	assert(plist);

	SLTNode* cur = plist;

	while (cur)
	{

		if (cur->data == x)
		{

			return cur;

		}
		else
		{

			cur = cur->next;

		}

	}

	return NULL;

}

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsert(SLTNode** pplist, SLTNode* pos, SLTDataType x)
{
	assert(pplist);

	if (*pplist == pos)
	{

		SListPushFront(pplist, x);

	}
	else
	{

		SLTNode* perv = *pplist;

		while (perv->next != pos)
		{

			perv = perv->next;

		}

		SLTNode* newnode = BuySListNode(x);

		newnode->next = pos;
		perv->next = newnode;

	}

}

void SListInsertAfter(SLTNode* pos, SLTDataType x)
{

	assert(pos);

	SLTNode* newnode = BuySListNode(x);

	SLTNode* tmp = pos->next;
	pos->next = newnode;
	newnode->next = tmp;

}


// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListErase(SLTNode** pplist, SLTNode* pos)
{

	assert(pos);

	if (pos == *pplist)
	{

		SListPopFront(pplist);

	}
	else
	{

		SLTNode* perv = *pplist;

		while (perv->next != pos)
		{

			perv = perv->next;

		}

		perv->next = pos->next;

		free(pos);
		pos = NULL;

	}

}

void SListEraseAfter(SLTNode* pos)
{

	assert(pos);

	SLTNode* tmp = pos->next->next;

	free(pos->next);

	pos->next = tmp;

}

//���������
void SListDestory(SLTNode** pplist)
{

	assert(pplist);

	SLTNode* cur = *pplist;

	while (cur)
	{

		SLTNode* next = cur->next;

		free(cur);

		cur = next;

	}

	*pplist = NULL;

}