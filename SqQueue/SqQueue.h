#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MaxSize 10

typedef int Elemtype;
typedef struct sqQueue {
    Elemtype data[MaxSize];
    int front, rear;
}SqQueue;

void InitQueue(SqQueue* Q);
int Length(SqQueue Q);
Elemtype Getfront(SqQueue Q);
bool Enqueue(SqQueue* Q,Elemtype e);
bool Dequeue(SqQueue* Q,Elemtype *e);
void PrintQueue(SqQueue Q);
bool Empty(SqQueue Q);
void Destory(SqQueue* Q);