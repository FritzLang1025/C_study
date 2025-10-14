#include "Sort.h"

void QuickSort(int L[], int low, int high) {
    if (low < high) {
        int mid = Partiton(L, low, high);
        QuickSort(L, low, mid - 1);
        QuickSort(L, mid + 1, high);
    }
}

int Partiton(int L[], int low, int high) {
    int tmp = L[low];
    while (low < high) {
        while (low < high && L[high] >= tmp) high--;
        L[low] = L[high];
        while (low < high && L[low] < tmp) low++;
        L[high] = L[low];
    }
    L[low] = tmp;
    return low;
}