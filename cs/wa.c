#include <stdio.h>

int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);

  if ( n <=0){
    printf("ERROR! Enter possible number");
    return 1;
  }
  printf("%d",n);
  while(n != 1){
    if ( n % 2 ==0){
      n/=2;
    }
    else{
      n = 3*n+1;
    }
    printf(" -> %d", n);
  }
  printf("\n");

  return 0;
}
