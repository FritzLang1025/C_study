#include "SqList.h"

void InitLsit(SqList* L) {
    for (int i = 0; i < MaxSize; i++) {
        L->data[i] = 0;
    }
    L->length = 0;
}

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

int LocateElem(SqList L, Elemtype e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return 0;
}