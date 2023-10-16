//
// Created by user on 15.10.2023.
//
//#include <stdio.h>
//#include <conio.h>
//void swap(int* a, int* b)
//{
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//int partition(int arr[], int low, int high)
//{
//    int pivot = arr[high];
//    int i = (low - 1);
//
//    for (int j = low; j <= high - 1; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
//void quickSort(int arr[], int low, int high)
//{
//    if (low < high) {
//
//        int pi = partition(arr, low, high);
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//int main() {
//    int v1[]={3,5,1,8,9,2,7,10,11,0};
//    int size=sizeof(v1)/ sizeof(v1[0]);
//    quickSort(v1,0,size);
//    int minodd=0;
//    for (int i = 0; i < size; i++) {
//            if(v1[i]%2!=0 && minodd<3) printf("\nminodd%d=%d",++minodd,v1[i]);
//    }
//   getch();
//    return 0;}
