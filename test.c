#include "SqList.h"

int main() {
    SqList L;
    InitLsit(&L);
    ListInsert(&L, 1, 1);
    ListInsert(&L, 2, 2);
    ListInsert(&L, 3, 4);
    ListInsert(&L, 4, 8);
    ListInsert(&L, 5, 16);
    printf("%d", LocateElem(L, 8));
}