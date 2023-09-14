
#include <stdio.h>

int main()
{
  int cp,sp;
  printf("enter cost price : ");
  scanf("%d",&cp);
   printf("enter selling price : ");
  scanf("%d",&sp);
  if(sp>cp){
      printf("you are in profit");
  }
    else{
      printf("you are in loss ");
      
  }
    return 0;
}
