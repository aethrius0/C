#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    int toplam=0;

    scanf("%d%d%d%d",&a,&b,&c,&x);
    printf("a,b,c ve x sayilarini giriniz. ");

    toplam+=(a*x*x);
    toplam+=(b*x);
    toplam+=c;

    printf("%d",toplam);

    return 0;
}
