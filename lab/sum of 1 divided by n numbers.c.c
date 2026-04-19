#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sum = 0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=(sum + (1.0)/i);
    }
      printf("sum is %f",sum);
    return 0;
}
