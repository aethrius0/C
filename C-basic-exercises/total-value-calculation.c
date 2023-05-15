#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int a,toplam=0;
    printf("Baslangic sayiyi giriniz:");
    scanf("%d",&a);

    while(a!=0)
    {
        toplam+=a;
        a--;

    }
    printf("Toplam:%d",toplam);


    return 0;
}
