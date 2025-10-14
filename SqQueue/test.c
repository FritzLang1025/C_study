#include "SqQueue.h"

int main() {
    SqQueue Q;
    InitQueue(&Q);
    Enqueue(&Q, 1);
    Enqueue(&Q, 1);
    Enqueue(&Q, 2);
    Enqueue(&Q, 3);
    Enqueue(&Q, 5);
    PrintQueue(Q);

    return 0;
}