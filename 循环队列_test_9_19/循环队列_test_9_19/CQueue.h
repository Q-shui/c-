#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <assert.h>

typedef struct
{
    int* a;
    int front;
    int rear;
    int k;
} MyCircularQueue;

//�ж϶����Ƿ�Ϊ��
bool myCircularQueueIsEmpty(MyCircularQueue* obj);

//�ж϶����Ƿ�����
bool myCircularQueueIsFull(MyCircularQueue* obj);

//��������
MyCircularQueue* myCircularQueueCreate(int k);

//����ԭԪ��
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);

//ɾ��Ԫ��
bool myCircularQueueDeQueue(MyCircularQueue* obj);

//��ȡ����Ԫ��
int myCircularQueueFront(MyCircularQueue* obj);

//��ȡ��βԪ��
int myCircularQueueRear(MyCircularQueue* obj);

//���ٶ���
void myCircularQueueFree(MyCircularQueue* obj);
