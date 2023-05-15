#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    float a;

    printf("Fonksiyonda kullanilmak uzere bir deger giriniz:");
    scanf("%f",&a);

    printf("f(%.3f)=%.3f",a,a*a*a+13*a*a+47*a+5);


    return 0;
}
