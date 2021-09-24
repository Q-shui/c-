#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLTDataType;


typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

// ��̬����һ���ڵ�
SLTNode* BuySListNode(SLTDataType x);

// �������ӡ
void SListPrint(SLTNode* plist);

// ������β��
void SListPushBack(SLTNode** pplist, SLTDataType x);

// �������ͷ��
void SListPushFront(SLTNode** pplist, SLTDataType x);

// �������βɾ
void SListPopBack(SLTNode** pplist);
// ������ͷɾ
void SListPopFront(SLTNode** pplist);
// ���������
SLTNode* SListFind(SLTNode* plist, SLTDataType x);

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SLTNode* pos, SLTDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SLTNode* pos);
