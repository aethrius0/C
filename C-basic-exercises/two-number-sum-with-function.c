#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int total(int num1,int num2)
{
    return num1+num2;
}



int main()
{

    int num1,num2;
    int sum;

    scanf("%d%d",&num1,&num2);
    sum=total(num1,num2);

    printf("%d",sum);

    return 0;
}
