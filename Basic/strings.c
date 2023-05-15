#include <stdio.h>
#include <string.h>

int main()
{

    //char can[100]="bencan";
    //char canan[100]=" selam";


    //printf("%d\n",strlen(can));
    //printf("%d\n",strcmp(can,canan));
    //printf("%d\n",strncmp(can,canan,4));
    //printf("%s\n",strcat(can,canan));
    //printf("%s\n",strncat(can,canan,3));

    char name[30];
    gets(name);
    printf("%s\n",name);

    char isim[30];
    fgets(isim,sizeof(isim),stdin);
    printf("%s\n",isim);



    return 0;
}
