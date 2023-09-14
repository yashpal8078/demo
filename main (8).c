#include<stdio.h>
int main(){
    int a;
    printf("enter first side: ");
    scanf("%d",&a);
    int b;
    printf("enter second side : ");
    scanf("%d",&b);
     int c;
    printf("enter third side : ");
    scanf("%d",&c);
    if(a+b>c || b+c>a || c+a>b){
        printf("these are the side of triangle ");
    }
 else{
     printf("these are not the side of triangle");
     
 }
    return 0;
}