#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MaxSize 10

typedef int Elemtype;
typedef struct stack {
    Elemtype data[MaxSize];
    int top;
}Stack;

void InitStack(Stack* S);
int GetTop(Stack S);
bool Push(Stack* S, Elemtype e);
bool Pop(Stack* S, Elemtype* e);
void PrintStack(Stack S);
bool Empty(Stack S);
void DestoryStack(Stack* S);