#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <malloc.h>

typedef int QDataType;

// ��ʽ�ṹ����ʾ���� 
typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;

// ���еĽṹ 
typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;

//������������
typedef struct
{
	Queue q1;
	Queue q2;
}MyStack;

// ��ʼ������ 
void QueueInit(Queue* q);

// ��β����� 
void QueuePush(Queue* q, QDataType data);

// ��ͷ������ 
void QueuePop(Queue* q);

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q);

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q);

// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q);

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q);

// ���ٶ��� 
void QueueDestroy(Queue* q);

//����һ��ջ
MyStack* myStackCreate();

//ѹջ
void myStackPush(MyStack* obj, int x);

//��ջ
int myStackPop(MyStack* obj);

//����ջ��Ԫ��
int myStackTop(MyStack* obj);

//�ж�ջ�Ƿ�Ϊ��
bool myStackEmpty(MyStack* obj);

//����ջ
void myStackFree(MyStack* obj);

