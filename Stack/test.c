#include "Stack.h"

int main() {
    Stack S;
    InitStack(&S);
    Push(&S, 1);
    Push(&S, 1);
    Push(&S, 2);
    Push(&S, 3);
    Push(&S, 5);
    PrintStack(S);

    return 0;
}