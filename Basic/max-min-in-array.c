#include <stdio.h>

int main()
{

    int dizi[10];
    int max=0;
    int min=999;
    int i;

    for(i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);

    }

    for(i=0;i<10;i++)
    {
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(dizi[i]<min)
        {
            min=dizi[i];
        }
    }
    printf("Maximum number in array: %d\n",max);
    printf("Minimum number in array: %d\n",min);


    return 0;
}
