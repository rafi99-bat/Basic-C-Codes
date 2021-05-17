#include <stdio.h>

void printArray(int* arr, int i, int l) {
  if(i==l)
    return;
  printf("%d\t", arr[i]);
  printArray(arr, i+1, l);
}

int main() {
  int i, n;
  printf("Input the number of elements to be stored in the array : ");
  scanf("%d", &n);
  int arr[n];
  printf("Input %d elements in the array :\n", n);
  for(i=0; i<n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
  printf("The elements in the array are : ");
  printArray(arr, 0, n);
  return 0;
}
