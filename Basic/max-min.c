#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,c;
    int enbuyuk=0;
    int enkucuk=0;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        enbuyuk=a;
        enkucuk=b;
    }
    else
    {
        enbuyuk=b;
        enkucuk=a;
    }

    if(c>enbuyuk)
    {
        enbuyuk=c;
    }

    if(enkucuk>c)
    {
        enkucuk=c;
    }

    printf("En buyuk sayi:%d\n",enbuyuk);
    printf("En kucuk sayi:%d\n",enkucuk);

    return 0;
}
