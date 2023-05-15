#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,count=0;
    int j=0;
    printf("Sayi giriniz:");
    scanf("%d",&a);


    while(count<=a)
    {
        if(count%17==0)
        {
            printf("%3d ",count);
            j++;
        }

        if(j==10)
        {
            printf("\n");
            j=0;
        }
        count++;
    }


    return 0;
}
