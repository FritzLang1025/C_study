#include "Stack.h"

void InitStack(Stack* S){
    S->top = -1;
}

int GetTop(Stack S)
{
    if (S.top == -1) return 0;
    return S.data[S.top - 1];
}

bool Push(Stack* S, Elemtype e)
{
    if (S->top == MaxSize - 1) return false;
    S->top++;
    S->data[S->top] = e;
    return true;
}

bool Pop(Stack* S, Elemtype* e)
{
    if (S->top == -1) return false;
    e = S->data[S->top];
    S->top--;
    return true;
}

void PrintStack(Stack S)
{
    int i = S.top;
    while (i != -1) {
        printf("%d\n", S.data[i--]);
    }
}

bool Empty(Stack S)
{
    if (S.top == -1) {
        return true;
    }
    else {
        return false;
    }
}

void DestoryStack(Stack* S)
{
    S->top = -1;
}