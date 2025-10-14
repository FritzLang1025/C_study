#include "Sort.h"

void MergeSort(int L[], int low, int high) {
    if (low >= high) return;
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(L, low, mid);
        MergeSort(L, mid + 1, high);
        Merge(L, low, mid, high);
    }
}

int Merge(int L[],int low,int mid,int high) {
    int i, j, k;
    int tempsize = high - low + 1;
    int* M = (int*)malloc(tempsize * sizeof(int));
    for (k = low; k <= high; k++) {
        M[k] = L[k];
    }
    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
        if (M[i] <= M[j]) {
            L[k] = M[i++];
        }
        else {
            L[k] = M[j++];
        }
    }
    while (i <= mid) L[k++] = M[i++];
    while (j <= high) L[k++] = M[j++];
}