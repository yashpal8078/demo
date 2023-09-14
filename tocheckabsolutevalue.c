
#include <stdio.h>

int main()
{
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  if(n<0){ //n is negative
  n=n*(-1);
  
      printf("the absolut value of yhe number is %d",n);
      
  }
  
    return 0;
}
