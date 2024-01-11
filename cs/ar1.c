#include <stdio.h>
#define MAX_SIZE 1024

int main(){
  int arr[MAX_SIZE],n;
  scanf("%d", &n);

  for ( int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
  }
  for ( int i = 0; i < n/2; ++i){
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  for ( int i = 0; i < n - 1; ++i){
    printf("%d, ", arr[i]);
    
  }
  printf("%d", arr[n-1]);
  return 0;
}
