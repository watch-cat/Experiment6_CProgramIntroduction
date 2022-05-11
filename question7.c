#include <stdio.h>
int fun(char s[]);
int main()
{
    char str[]="d236kf3h48s5d67u!634sad!";
    int k;
    k=fun(str);
    printf("k=%d\n",k);
    return 0;
}


/* 请在这里填写答案 */
int fun(char s[]){
    int n = 0,ans = 0;
    while (s[n]){
        if (s[n] >= '0' && s[n] <= '9') ++ans;
        ++n;
    }

    return ans;
}