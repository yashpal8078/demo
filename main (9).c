#include<stdio.h>
int main(){
    int ram,shayam,ajay;
    printf("enter the age of ram: ");
    scanf("%d",&ram);
    printf("enter the agege of shayam: ");
    scanf("%d",&shayam);
    printf("enter the age of ajay : ");
    scanf("%d",&ajay);
    if(ram<shayam && ram<ajay){
        printf("%d is youngest",ram);
    }
 if(shayam<ram && shayam<ajay){
     printf("%d is youngest",shayam);
 }
 if(ajay<ram && ajay<shayam){
     printf("%d is youngest",ajay);
 }
 
    return 0;
}