#include "Queue.h"

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
		q->_rear = q->_front = newnode;
	else
	{
		q->_rear->_next = newnode;
		q->_rear = newnode;;
	}

}

// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);

	if (q->_front->_next == NULL)
	{
		free(q->_front);
		q->_front = q->_rear = NULL;
	}
	else
	{
		QNode* tmp = q->_front->_next;
		free(q->_front);
		q->_front = tmp;
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

	return q->_rear == NULL;
}

// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	QNode* cur = q->_front;
	while (cur)
	{
		QNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_front = q->_rear = NULL;
}
