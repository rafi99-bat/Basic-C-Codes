#include <stdio.h>

int largestElement(int* arr, int i, int l) {
  static int largest = 0;
  if(i == l)
    return largest;
  if(arr[i] > arr[i-1]) {
    largest = arr[i];
    largestElement(arr, i+1, l);
  }
}

int main() {
  int i, n;
  printf("Input the number of elements to be stored in the array : ");
  scanf("%d", &n);
  int arr[n];
  for(i=0; i<n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
  printf("Largest element of the array is: %d", largestElement(arr, 0, n));
  return 0;
}
