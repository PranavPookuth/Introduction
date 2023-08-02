
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float a,b,c,avg;
    printf("enter the 3 numbers");
    scanf("%f %f %f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("average is : %f",avg);
    return 0;
}