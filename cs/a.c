#include <stdio.h>
#define MAX_SIZE 100

int main(){
  int arr[MAX_SIZE],n;
  printf("Enter the size of the array:");
  scanf("%d", &n);

  printf("\nEnter the elements of array: ");
  for ( int i = 0; i < n; ++i){
    scanf("%d",&arr[i]);
  }
  printf("\nYour array is: ");
  for ( int i = 0; i < n; ++i){
    printf("\n%d", arr[i]);
  }
  return 0;
}

