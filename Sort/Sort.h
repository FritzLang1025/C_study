#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MaxSize 50

void QuickSort(int L[], int low, int high);//快排
void MergeSort(int L[], int low, int high);//归并
void HeapSort(int L[], int len);//大根堆