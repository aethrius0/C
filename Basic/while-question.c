#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int a;
    printf("Baslangic sayiyi giriniz:");
    scanf("%d",&a);

    while(a!=0)
    {
        printf("%d ",a);
        a--;
    }



    return 0;
}
