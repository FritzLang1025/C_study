#include "Sort.h"

int main() {

    int A[MaxSize];
    for (int i = 0; i < MaxSize; i++) {
        A[i] = i + 1;
    }
    for (int i = 0; i < MaxSize; i++) {
        int j = rand() % (i + 1);
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }


    /*QuickSort(A, 0, MaxSize - 1);*/
    /*MergeSort(A, 0, MaxSize - 1);*/
    HeapSort(A, MaxSize);


    for (int i = 0; i < MaxSize; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}