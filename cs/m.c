#include <stdio.h>
#define MAX_SIZE 100

int main(){
  int arr[MAX_SIZE],n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  
  printf("Enter the elements of the array: ");
  for ( int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
  }
  //reverse the array.
  int temp;
  for ( int i =0; i < n/2; ++i){
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  //display the reversed array.
  for ( int i = 0; i < n; ++i){
    printf("%d ", arr[i]);
  }
  return 0;
}
