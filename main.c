#include "stdio.h"
void fun(char a[],char c)
{
    int i,j;
/***********SPACE***********/
    for(i=j=0;a[i]!='\0' ;i++)
        if(a[i]!=c)
            a[j++]=a[i];
/***********SPACE***********/

    a[j]
            ='\0'    ;
}
int main()
{
    char a[20],cc;
/***********SPACE***********/

    gets(a);
    cc=getchar();
    printf("%s %c",a,cc);
/***********SPACE***********/

    fun(a,cc)
            ;
    puts(a);
    return 0;
}