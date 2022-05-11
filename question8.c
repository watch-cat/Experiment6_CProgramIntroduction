#include <stdio.h>
void fun(char str1[],char str2[ ]);
int main()
{
    char s1[80],s2[80];
    scanf("%s",s2);
    fun(s1,s2);
    printf("%s", s1);

    return 0;

}

/* 请在这里填写答案 */
void fun(char str1[],char str2[ ]){
    int n = 0;
    while (str2[n]) {
        str1[n] = str2[n];
        ++n;
    }
}