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

	assert(pplist);

	SLTNode* newnode = BuySListNode(x);

	newnode->next = *pplist;
	*pplist = newnode;


}

// �������βɾ
void SListPopBack(SLTNode** pplist)
{

}

// ������ͷɾ
void SListPopFront(SLTNode** pplist)
{

}

// ���������
SLTNode* SListFind(SLTNode* plist, SLTDataType x)
{

}

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{

}

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SLTNode* pos)
{

}
