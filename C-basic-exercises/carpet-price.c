#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    char type_carpet;
    int T_unitprice=18,B_unitprice=17,S_unitprice=19,length,width;

    printf("&&&&Type of Carpets&&&&\nTwetty:T\nBugs:B\nSpiderman:S\n");
    printf("Enter the desired type:");
    scanf(" %c",&type_carpet);

    printf("Enter the length:");
    scanf("%d",&length);

    printf("Enter the width:");
    scanf("%d",&width);


    if(type_carpet=='T')
    {
        printf("Total price: %d",length*width*T_unitprice);
    }
    else if(type_carpet='B')
    {

        printf("Total price: %d",length*width*B_unitprice);
    }
    else if(type_carpet='S')
    {
        printf("Total price: %d",length*width*S_unitprice);
    }



    return 0;
}
