#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,c;
    printf("Enter the degrees of triangle\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && a==c)
    {

        printf("This is equilateral triangle");
    }
    else if(a==b || a==c || b==c)
    {
        printf("This is isosceles triangle");
    }

    else
    {

        printf("This is scalene triangle");
    }
    return 0;
}
