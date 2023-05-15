#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[100]="";
    printf("Enter the sentence: ");
    scanf("%[^\n]",&str);


    int count=1;
    for(int i=0;i<=sizeof(str);i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }

    printf("%d",count);






    return 0;
}
