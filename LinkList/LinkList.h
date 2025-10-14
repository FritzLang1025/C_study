#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int Elemtype;
typedef struct Link_List {
    Elemtype data;
    struct LL* next;
}LNode,*LinkList;

//基本操作
void InitList(LinkList* L);                      //初始化
int Length(LinkList L);                         //求表长
int LocateElem(LinkList L, Elemtype e);      //按值查找
int GetElem(LinkList L, int i);              //按位查找
bool ListInsert(LinkList* L, int i, Elemtype e); //插入
bool ListDelete(LinkList* L, int i, Elemtype* e);//删除
void PrintList(LinkList L);                      //输出
bool Empty(LinkList L);                         //判空
/*bool DestoryList(LinkList L);*/                  //销毁

//特别的，单链表特殊插入操作
void List_HeadInsert(LinkList* L, int n);//头插法创建单链表
void List_TailInsert(LinkList* L, int n);//尾插法创建单链表