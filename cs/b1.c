#include <stdio.h>
#define MAX_SIZE 100


int main(){
  int arr[MAX_SIZE],n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);

  printf("\nEnter the elements of the array: ");
  for ( int i = 0; i < n; ++i){
    scanf("%d",&arr[i]);
  }
  //reverse.
  for ( int i = 0; i < n/2; ++i){
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  printf("Your reverse array is: ");
  for ( int i = 0; i < n; ++i){
    printf("%d ",arr[i]);
  }
  return 0;
}
