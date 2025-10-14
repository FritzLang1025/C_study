#include "LinkList.h"

int main() {
    LinkList L;
    InitList(&L);
    List_HeadInsert(&L, 5);
    ListInsert(&L, 2, 1);
    PrintList(L);

    return 0;
}