#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float mark;
    printf("enter the mark :");
    scanf("%f",&mark);
    if(mark<50){
        printf("failed");
    }
        else{
            printf("passed");
        }
    return 0;
}