#include <stdio.h>
int fun( char str[]);
int main()
{
    char str[80];
    scanf("%s",str);
    printf("%d", fun(str));

    return 0;

}

/* 请在这里填写答案 */
int fun( char str[]){
    int n = 0;
    while(str[n]){
        n++;
    }

    return n;
}