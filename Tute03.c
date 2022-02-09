
#include <stdio.h>
int main()
 {
  int n,i,sum=0 ; 
  printf("Enter the n of numbers :");
  scanf("%d",&n);

  for(i=1; i<=n; i++)
{
  sum+=i;
}
  printf("sum of numbers :%d",sum);
  return 0;
}

