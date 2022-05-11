#include<stdio.h>
#include "stdio.h"
void fun(char s1[80],char s2[40]);
int main ( )
{char str1[80],str2[40];
    gets(str1);gets(str2);
    fun(str1,str2);
    puts(str1);
    return 0;
}

/* 请在这里填写答案 */
//指针方法
//void fun(char s1[80],char s2[40]){
//    while (*s1) {
//        s1++;
//    }
//    while (*s2) {
//        *s1++ = *s2;
//        *s2++;
//    }
//}

void fun(char s1[80],char s2[40]){
    int n = 0, m = 0;
    while (s1[n]){
        n++;
    }
    while (s2[m]){
        s1[n + m] = s2[m];
        m++;
    }
}