#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MaxSize 50

//静态分配的顺序表
typedef int Elemtype;
typedef struct Sq_List {
    Elemtype data[MaxSize];
    int length;
}SqList;

//基本操作
void InitLsit(SqList* L);                       //初始化
int Length(SqList L);                           //求表长
int LocateElem(SqList L, Elemtype e);           //按值查找
int GetElem(SqList, int i);                     //按位查找
void ListInsert(SqList* L, int i, Elemtype e);  //插入
void ListDelete(SqList* L, int i, Elemtype* e); //删除
void PrintList(SqList L);                        //输出
bool Empty(SqList L);                           //判空
void DestoryList(SqList* L);                    //销毁