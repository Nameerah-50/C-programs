#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,value = 1;
   int i;
   printf("enter a number : ");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
    printf("%d\n",value);
    value=value*2;
   }
    return 0;
}
