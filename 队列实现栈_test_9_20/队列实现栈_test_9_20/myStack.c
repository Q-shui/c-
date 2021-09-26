#include "myStack.h"

// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);

	q->_front = q->_rear = NULL;
}

// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));

	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newnode->_data = data;
	newnode->_next = NULL;

	if (q->_rear == NULL)
	{
		q->_front = q->_rear = newnode;
	}
	else
	{
		q->_rear->_next = newnode;
		q->_rear = newnode;
	}
}

// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	if (q->_front->_next == NULL)
	{
		q->_front = q->_rear = NULL;
	}
	else
	{
		QNode* next = q->_front->_next;
		free(q->_front);
		q->_front = next;
	}

}

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->_front->_data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->_rear->_data;
}

// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	assert(q);

	QNode* cur = q->_front;
	int size = 0;
	
	while (cur)
	{
		size++;
		cur = cur->_next;
	}

	return size;

}

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	assert(q);

	return q->_front == NULL;
}

// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	assert(q);

	QNode* cur = q->_front;

	while (cur)
	{
		QNode* next = q->_front->_next;
		free(cur);
		cur = next;
	}

	q->_front = q->_rear = NULL;

}

//����һ��ջ
MyStack* myStackCreate()
{
	MyStack* newnode = (MyStack*)malloc(sizeof(MyStack));

	QueueInit(&newnode->q1);
	QueueInit(&newnode->q2);

	return newnode;
}

//ѹջ
void myStackPush(MyStack* obj, int x)
{
	assert(obj);

	if (!QueueEmpty(&obj->q1))
		QueuePush(&obj->q1, x);
	else
		QueuePush(&obj->q2, x);
}

//��ջ
int myStackPop(MyStack* obj)
{
	assert(obj);
	assert(!myStackEmpty(obj));

	Queue* emptyQ = &obj->q1;
	Queue* noneemptyQ = &obj->q2;

	if (QueueEmpty(&obj->q2))
	{
		emptyQ = &obj->q2;
		noneemptyQ = &obj->q1;
	}

	while (QueueSize(noneemptyQ) > 1)
	{
		QueuePush(emptyQ, QueueFront(noneemptyQ));
		QueuePop(noneemptyQ);
	}

	int top = QueueFront(noneemptyQ);
	QueuePop(noneemptyQ);

	return top;
}

//����ջ��Ԫ��
int myStackTop(MyStack* obj)
{
	assert(obj);
	assert(!myStackEmpty(obj));

	if (!QueueEmpty(&obj->q1))
		return QueueBack(&obj->q1);
	else
		return QueueBack(&obj->q2);
}

//�ж�ջ�Ƿ�Ϊ��
bool myStackEmpty(MyStack* obj)
{
	assert(obj);
	
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

//����ջ
void myStackFree(MyStack* obj)
{
	assert(obj);

	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
}


