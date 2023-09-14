#include<stdio.h>
int main(){
    int a;
    printf("enter first number : ");
    scanf("%d",&a);
    int b;
    printf("enter second number : ");
    scanf("%d",&b);
     int c;
    printf("enter third number : ");
    scanf("%d",&c);
    if(a>c && a>b){
        printf("%d is greatest",a);
    }
    if(b>c && b>a){
printf("%d is greatest",b);
    }
    if(c>a && c>b){
        printf("%d is greatest",c);
    }
    
    return 0;
}