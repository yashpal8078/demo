
#include <stdio.h>

int main(){
int a,p;
int l=2;
int b=1;
a=l*b;
p= (l+b);
printf("your area is %d\n",a);
printf("your perimeter is %d\n",p);
if(a>p){
    printf("area is greatest");
    
} 
else{
    printf("area is not greatest");
}


return 0;
}