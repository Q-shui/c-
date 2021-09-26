#include "MyQueue.h"

// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	assert(ps);

	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;

}

// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);

	

	if (ps->_capacity == ps->_top)
	{
		int newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		STDataType* tmp = realloc(ps->_a, sizeof(STDataType) * newcapacity);

		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}

		ps->_a = tmp;
		ps->_capacity = newcapacity;
	}
	ps->_a[ps->_top] = data;
	ps->_top++;

}

// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	--ps->_top;

}

// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	
	return ps->_a[ps->_top - 1];
}

// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->_top;
}

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->_top == 0;
}

// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);

	free(ps->_a);
	ps->_capacity = ps->_top = 0;
}


/** Initialize your data structure here. */

MyQueue* myQueueCreate()
{
	MyQueue* qst = (MyQueue*)malloc(sizeof(MyQueue));

	StackInit(&qst->emptyS);
	StackInit(&qst->noneemptyS);

	return qst;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) 
{
	assert(obj);

	StackPush(&obj->noneemptyS, x);

}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) 
{
	assert(obj);
	assert(!myQueueEmpty(obj));

	while (StackSize(&obj->noneemptyS) > 1)
	{
		StackPush(&obj->emptyS, StackTop(&obj->noneemptyS));
		StackPop(&obj->noneemptyS);
	}

	int front = StackTop(&obj->noneemptyS);
	StackPop(&obj->noneemptyS);

	while (StackSize(&obj->emptyS))
	{
		StackPush(&obj->noneemptyS, StackTop(&obj->emptyS));
		StackPop(&obj->emptyS);
	}

	return front;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) 
{
	assert(obj);
	assert(!myQueueEmpty(obj));

	while (StackSize(&obj->noneemptyS) > 1)
	{
		StackPush(&obj->emptyS, StackTop(&obj->noneemptyS));
		StackPop(&obj->noneemptyS);
	}

	int front = StackTop(&obj->noneemptyS);

	while (StackSize(&obj->emptyS))
	{
		StackPush(&obj->noneemptyS, StackTop(&obj->emptyS));
		StackPop(&obj->emptyS);
	}

	return front;
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) 
{
	assert(obj);

	return StackEmpty(&obj->noneemptyS);
}

void myQueueFree(MyQueue* obj) 
{
	assert(obj);

	StackDestroy(&obj->emptyS);
	StackDestroy(&obj->noneemptyS);
	free(obj);

}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/
