#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{


    int a,b;
    printf("2 adet sayi giriniz: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d daha buyuktur %d\n",a,b);
    }
    else if(a<b)
    {
        printf("%d daha kucuktur %d\n",a,b);
    }
    else
    {
        printf("2 sayi da birbirine esittir");
    }

    return 0;
}
