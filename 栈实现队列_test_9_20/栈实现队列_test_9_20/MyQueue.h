#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <malloc.h>

// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// ջ��
	int _capacity;  // ���� 
}Stack;

typedef struct
{
	Stack emptyS;
	Stack noneemptyS;

} MyQueue;

// ��ʼ��ջ 
void StackInit(Stack* ps);

// ��ջ 
void StackPush(Stack* ps, STDataType data);

// ��ջ 
void StackPop(Stack* ps);

// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps);

// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);

// ����ջ 
void StackDestroy(Stack* ps);



/** Initialize your data structure here. */

MyQueue* myQueueCreate();

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x);

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj);

/** Get the front element. */
int myQueuePeek(MyQueue* obj);

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj);

void myQueueFree(MyQueue* obj);

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/

