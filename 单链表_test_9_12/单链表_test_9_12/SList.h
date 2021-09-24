#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


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

//��������
int SListSize(SLTNode* plist);

//�������Ƿ�Ϊ��
bool SListEmpty(SLTNode* plist);

// ���������
SLTNode* SListFind(SLTNode* plist, SLTDataType x);

//������˳�����ң�posλ��֮ǰ��Ҫ�õ�˫ָ��
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsert(SLTNode** pplist, SLTNode* pos, SLTDataType x);
void SListInsertAfter(SLTNode* pos, SLTDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListErase(SLTNode** pplist, SLTNode* pos);
void SListEraseAfter(SLTNode* pos);

//���������
void SListDestory(SLTNode** pplist);