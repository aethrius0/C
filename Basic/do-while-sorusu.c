#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    float a,count=2,total=1;
    printf("Bir deger giriniz:");
    scanf("%f",&a);

    do{

        total+=(1/count);
        count++;




    }while(count<a+1);

    printf("%.2f",total);

    return 0;
}
