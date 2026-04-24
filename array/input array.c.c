#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5] = {};
  printf("enter the numbers");

  for(int i = 0;i<5;i++){
   scanf("%d/n",&arr[i]);
  }
  for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
  }
    return 0;
}
