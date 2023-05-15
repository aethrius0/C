#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    int a;
    int ones_dgt,tens_dgt,hundreds_dgt,thousands_dgt;
    printf("Enter a random number: ");
    scanf("%d",&a);

    ones_dgt=a%10;
    a=a/10;
    tens_dgt=a%10;
    a=a/10;
    hundreds_dgt=a%10;
    a=a/10;
    thousands_dgt=a%10;
    a=a/10;

    printf("Ones digit: %8d\nTens digit: %8d\nHundreds digit: %4d\nThousands digit: %3d",ones_dgt,tens_dgt,hundreds_dgt,thousands_dgt);



    return 0;
}
