#include "LinkList.h"

void InitList(LinkList* L) {
    *L = (LNode*)malloc(sizeof(LNode));
    (*L)->next = NULL;
}

int Length(LinkList L) {
    int i = 0;
    LNode* p = L;
    while (p->next != NULL) {
        p = p->next;
        i++;
    }
    return i;
}

int LocateElem(LinkList L, Elemtype e){
    LNode* p = L->next;
    int i = 0;
    while (p!=NULL&&p->data != e) {
        p = p->next;
        i++;
    }
    return i;
}

int GetElem(LinkList L, int i) {
    LNode* p = L->next;
    int j = 0;
    while (p!=NULL&&j < i) {
        p = p->next;
        j++;
    }
    return p->data;
}

bool ListInsert(LinkList* L, int i, Elemtype e){
    //找到第i-1个节点
    LNode* p = *L;
    int j = 0;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL) return false;
    LNode* q = (LNode*)malloc(sizeof(LNode));
    q->data = e;
    q->next = p->next;
    p->next = q;

    return true;
}

bool ListDelete(LinkList* L, int i, Elemtype* e){
    LNode* p = *L;
    int j = 0;
    while (p != NULL & j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL) return false;
    LNode* q = (LNode*)malloc(sizeof(LNode));
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

void PrintList(LinkList L){
    LNode* p = L->next;
    if (p == NULL) {
        printf("NULL");
    }
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}

bool Empty(LinkList L)
{
    if (L->next == NULL) {
        return true;
    }
    else {
        return false;
    }
}

//bool DestoryList(LinkList L){
//    LNode* p;
//    while (L != NULL) {
//        p = L;
//        L = L->next;
//        free(p);
//    }
//    return true;
//}

void List_HeadInsert(LinkList* L,int n){
    LNode* p;
    for (int i = 0; i < n;i++) {
        p = (LNode*)malloc(sizeof(LNode));
        p->next = (*L)->next;
        (*L)->next = p;
        p->data = i;
    }
}

void List_TailInsert(LinkList* L,int n){
    LNode* s, * r;
    r = *L;
    for (int i = 0; i < n; i++) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = i;
        r->next = s;
        r = s;
    }
    r->next = NULL;
}
