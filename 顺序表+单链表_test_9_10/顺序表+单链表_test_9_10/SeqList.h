#pragma once
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

typedef int SQDataType;

typedef struct SeqList
{
	SQDataType* a;
	int size;//���ݸ���
	int capacity;//�����ռ��С
}SLT;


void SeqListInit(SLT* ps1);//��ʼ��

void SeqListDestory(SLT* ps1);//����

void SeqListPrint(SLT* ps1);//��ӡ˳���

void SeqListCheckCapacity(SLT* ps1);//��������Ƿ���

//��ɾ���

void SeqListPushBack(SLT* ps1, SQDataType x);//β��

void SeqListPushFront(SLT* ps1);//βɾ


void SeqListPopback(SLT* s1, SQDataType x);//ͷ��

void SeqListPopFront(SLT* s1);//ͷɾ


int SeqListFind(SLT* s1, SQDataType x);//����

void SeqListInsert(SLT* s1, int pos, SQDataType x);//�м����

void SeqListErase(SLT* s1, int pos);//ָ��λ�õ�ɾ��

size_t SeqListSize(SLT* ps1);

void SeqListAt(SLT* ps1, int pos, SQDataType x);
