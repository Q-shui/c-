//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include<malloc.h>
//#include <stdbool.h>
//typedef int QDataType;
//
//// ��ʽ�ṹ����ʾ���� 
//typedef struct QListNode
//{
//	struct QListNode* _next;
//	QDataType _data;
//}QNode;
//
//// ���еĽṹ 
//typedef struct Queue
//{
//	QNode* _front;
//	QNode* _rear;
//}Queue;
//typedef struct
//{
//	Queue q1;
//	Queue q2;
//} MyStack;
//// ��ʼ������ 
//void QueueInit(Queue* q);
//// ��β����� 
//void QueuePush(Queue* q, QDataType data);
//// ��ͷ������ 
//void QueuePop(Queue* q);
//// ��ȡ����ͷ��Ԫ�� 
//QDataType QueueFront(Queue* q);
//// ��ȡ���ж�βԪ�� 
//QDataType QueueBack(Queue* q);
//// ��ȡ��������ЧԪ�ظ��� 
//int QueueSize(Queue* q);
//// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
//int QueueEmpty(Queue* q);
//// ���ٶ��� 
//void QueueDestroy(Queue* q);
//
//
//
//// ��ʼ������ 
//void QueueInit(Queue* q)
//{
//	assert(q);
//
//	q->_front = q->_rear = NULL;
//
//}
//
//// ��β����� 
//void QueuePush(Queue* q, QDataType data)
//{
//	assert(q);
//
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//
//	newnode->_data = data;
//	newnode->_next = NULL;
//
//	if (q->_rear == NULL)
//		q->_rear = q->_front = newnode;
//	else
//	{
//		q->_rear->_next = newnode;
//		q->_rear = newnode;;
//	}
//
//}
//
//// ��ͷ������ 
//void QueuePop(Queue* q)
//{
//	assert(q);
//
//	if (q->_front->_next == NULL)
//	{
//		free(q->_front);
//		q->_front = q->_rear = NULL;
//	}
//	else
//	{
//		QNode* tmp = q->_front->_next;
//		free(q->_front);
//		q->_front = tmp;
//	}
//}
//
//// ��ȡ����ͷ��Ԫ�� 
//QDataType QueueFront(Queue* q)
//{
//	assert(q);
//
//	return q->_front->_data;
//}
//
//// ��ȡ���ж�βԪ�� 
//QDataType QueueBack(Queue* q)
//{
//	assert(q);
//	assert(!QueueEmpty(q));
//
//	return q->_rear->_data;
//}
//
//// ��ȡ��������ЧԪ�ظ��� 
//int QueueSize(Queue* q)
//{
//	assert(q);
//
//	QNode* cur = q->_front;
//	int size = 0;
//	while (cur)
//	{
//		size++;
//		cur = cur->_next;
//	}
//
//	return size;
//}
//
//// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
//int QueueEmpty(Queue* q)
//{
//	assert(q);
//
//	return q->_front == NULL;
//}
//
//// ���ٶ��� 
//void QueueDestroy(Queue* q)
//{
//	assert(q);
//
//	QNode* cur = q->_front;
//	while (cur)
//	{
//		QNode* next = cur->_next;
//		free(cur);
//		cur = next;
//	}
//	q->_front = q->_rear = NULL;
//}
//
//
//
//
///** Initialize your data structure here. */
//
//MyStack* myStackCreate()
//{
//	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&pst->q1);
//	QueueInit(&pst->q2);
//
//	return pst;
//}
//
///** Push element x onto stack. */
//void myStackPush(MyStack* obj, int x)
//{
//	assert(obj);
//
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else 
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
///** Removes the element on top of the stack and returns that element. */
//int myStackPop(MyStack* obj)
//{
//	Queue* emptyQ = &obj->q1;
//	Queue* noneemptyQ = &obj->q2;
//
//	if (!QueueEmpty(&obj->q1))
//	{
//		emptyQ = &obj->q2;
//		noneemptyQ = &obj->q1;
//	}
//
//	while (QueueSize(noneemptyQ) > 1)
//	{
//		QueuePush(emptyQ, QueueFront(noneemptyQ));
//		QueuePop(noneemptyQ);
//	}
//
//	int top = QueueFront(noneemptyQ);
//	QueuePop(noneemptyQ);
//	return top;
//}
//
///** Get the top element. */
//int myStackTop(MyStack* obj)
//{
//	assert(obj);
//
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&(obj->q1));
//	}
//	else
//	{
//		return QueueBack(&(obj->q2));
//	}
//
//
//}
//
///** Returns whether the stack is empty. */
//bool myStackEmpty(MyStack* obj)
//{
//	assert(obj);
//
//	return  QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj)
//{
//	assert(obj);
//
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//
//	free(obj);
//
//}
//
//int main(void)
//{
//	MyStack* pst = myStackCreate();
//
//	myStackPush(pst, 1);
//	myStackPush(pst, 2);
//
//	printf("%d", myStackTop(pst));
//	printf("%d", myStackPop(pst));
//	
//	return 0;
//}
