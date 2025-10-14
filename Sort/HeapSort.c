//#include "Sort.h"
//
//void BuildMaxHeap(int L[], int n);
//void HeadAdjust(int L[], int k, int n);
//void swap(int L[], int x, int y);
//
//void HeapSort(int L[], int n) {
//    BuildMaxHeap(L, n);
//    for (int i = n; i >= 1; i--) {
//        swap(L, 1, i);
//        HeadAdjust(L, 1, i);
//    }
//}
//
//void BuildMaxHeap(int L[], int n) {
//    for (int j = n / 2; j >= 1; j--) {
//        HeadAdjust(L, j, n);
//    }
//}
//
//void HeadAdjust(int L[], int k, int n) {
//    int temp = L[k-1];
//    for (int t = 2 * k; t <= n; t *= 2) {
//        if (t <= n && L[t - 1] < L[t]) {
//            t++;
//        }
//        if (temp > L[t - 1]) break;
//        else {
//            L[k - 1] = L[t - 1];
//            k = t;
//        }
//    }
//    L[k - 1] = temp;
//}
//
//void swap(int L[], int x, int y) {
//    int temp = L[x-1];
//    L[x-1] = L[y-1];
//    L[y-1] = temp;
//}

#include "Sort.h"

void BuildMaxHeap(int L[], int n);
void HeadAdjust(int L[], int k, int n);
void swap(int L[], int x, int y);

void HeapSort(int L[], int n) {
    BuildMaxHeap(L, n);
    for (int i = n - 1; i > 0; i--) {
        swap(L, 0, i);           // 交换堆顶和最后一个元素
        HeadAdjust(L, 0, i);     // 调整堆
    }
}

void BuildMaxHeap(int L[], int n) {
    for (int j = n / 2 - 1; j >= 0; j--) {  // 从最后一个非叶子节点开始
        HeadAdjust(L, j, n);
    }
}

void HeadAdjust(int L[], int k, int n) {
    int temp = L[k];
    for (int i = 2 * k + 1; i < n; i = 2 * i + 1) {  // 左孩子
        // 选择较大的孩子
        if (i + 1 < n && L[i] < L[i + 1]) {
            i++;
        }
        if (temp >= L[i]) break;  // 父节点已经最大
        else {
            L[k] = L[i];
            k = i;
        }
    }
    L[k] = temp;
}

void swap(int L[], int x, int y) {
    int temp = L[x];
    L[x] = L[y];
    L[y] = temp;
}