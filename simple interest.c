#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int P;
    float R,n,SI;
    printf("enter the principle amount,interset rate,number of years\n :");
    scanf("%d",&P);
    scanf("%f%f",&R,&n);
    SI=(P*R*n)/100;
    printf("simple interestis %f",SI);
    return 0;

}