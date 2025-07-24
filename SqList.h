#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MaxSize 50

typedef int Elemtype;
typedef struct SL {
    Elemtype data[MaxSize];
    int length;
}SqList;

void InitLsit(SqList* L);
void ListInsert(SqList* L, int i, Elemtype e);
void ListDelete(SqList* L, int i, Elemtype* e);
int LocateElem(SqList L, Elemtype e);