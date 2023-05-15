#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b;

    printf("Carpimlari sonucunun isaretini bulmak istediginiz sayilari giriniz:");
    scanf("%d%d",&a,&b);

    if(a>0 && b>0)
    {
        printf("sign(%d*%d)=+%d",a,b,1);
    }
    else if((a>0 && b<0) || (a<0 && b>0))
    {
        printf("sign(%d*%d)=-%d",a,b,1);
    }
    else if(a<0 && b<0)
    {
        printf("sign(%d*%d)=+%d",a,b,1);
    }
    else
    {
        printf("sign(%d*%d)=%d",a,b,0);

    }

    return 0;
}
