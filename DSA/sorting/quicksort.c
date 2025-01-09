#include<stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int arr[], int start, int end){
  int pivot = arr[end];
  int i = start-1;
  for(int j=start;j<end;j++){
    if(arr[j]<pivot){
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i+1], &arr[end]);
  return i+1;
}

void quicksort(int arr[], int start, int end){
  if(start<end){
    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot-1);
    quicksort(arr, pivot+1,end);
  }
}




void printArray(int *arr, int size){
  for(int i=0;i<size;i++){
    printf("%d,", arr[i]);
  }
}
int main(){
  int array[] = {12,5,8,3,15,7};
  int size = sizeof(array)/sizeof(array[0]);
  quicksort(array, 0, size-1);
  printArray(array, size);
}
