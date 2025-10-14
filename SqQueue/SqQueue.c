#include "SqQueue.h"

void InitQueue(SqQueue* Q)
{
    Q->front = Q->rear = 0;
}

int Length(SqQueue Q)
{
    int len = (Q.rear - Q.front + MaxSize) % MaxSize;
    return len;
}

Elemtype Getfront(SqQueue Q)
{
    if (Q.front == Q.rear) return false;
    int i = (Q.front - 1) % MaxSize;
    return Q.data[i];
}

bool Enqueue(SqQueue* Q,Elemtype e)
{
    if ((Q->rear - Q->front + MaxSize) % MaxSize == MaxSize) return false;
    Q->rear = (Q->rear + 1) % MaxSize;
    Q->data[Q->rear] = e;
    return true;
}

bool Dequeue(SqQueue* Q,Elemtype* e)
{
    if (Q->front == Q->rear) return false;
    e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MaxSize;
    return true;
}

void PrintQueue(SqQueue Q)
{
    int i = Q.front;
    while (i != Q.rear) {
        printf("%d\n", Q.data[Q.front]);
        i = (i + 1) % MaxSize;
    }
}

bool Empty(SqQueue Q)
{
    if (Q.front == Q.rear) {
        return true;
    }
    else {
        return false;
    }
}

void Destory(SqQueue* Q)
{
    Q->front = Q->rear = 0;
}