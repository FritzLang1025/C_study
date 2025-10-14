#include "SqList.h"

//初始化
void InitLsit(SqList* L) {
    for (int i = 0; i < MaxSize; i++) {
        L->data[i] = 0;
    }
    L->length = 0;
}

//求表长
int Length(SqList L){
    return L.length;
}

//按值查找
int LocateElem(SqList L, Elemtype e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return 0;
}

//按位查找
int GetElem(SqList L, int i){
    return L.data[i - 1];
}

//插入
void ListInsert(SqList* L, int i, Elemtype e) {
    if (i<1 || i>L->length + 1) return false;
    if (L->length >= MaxSize) return false;
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;
    L->length++;
    return true;
}

//删除
void ListDelete(SqList* L, int i, Elemtype* e) {
    if (i<0 || i>L->length) return false;
    if (L->length == 0) return false;
    e = L->data[i - 1];
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    }
    L->length--;
    return true;
}

//输出
void PrintList(SqList L)
{
    int i = 0;
    while (i < L.length) {
        printf("%d\n", L.data[i++]);
    }
    return 0;
}

//判空
bool Empty(SqList L){
    if (L.length != 0) {
        return true;
    }
    else {
        return false;
    }
}

//销毁
void DestoryList(SqList* L)
{
}