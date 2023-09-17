#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the points are lies on origin");
    }else if(x==0){
        printf("the points are lies on y-axis");
    }else if(y==0){
        printf("the points are lies on x-axis");
    }else{
        printf("the points does not exist");
    }
return 0;
}
