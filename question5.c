#include <stdio.h>
#define N 10
void fun(int a[N][N],int n);
int main()
{
    int a[N][N];
    int i,j,n;
    scanf("%d",&n);
    fun(a,n);
    for (i=0;i<n;i++)
    { for (j=0; j<=i;j++)
            printf("%6d",a[i][j]);
        printf("\n");
    }
    return 0;
}

/* 请在这里填写答案 */
void fun(int a[N][N],int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) a[i][j] = 1;
            else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
}