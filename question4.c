#include <stdio.h>
#define N 3
int fun(int a[N][N]);
int main()
{
    int a[N][N],i,j,s;
    for(i=0;i<N;i++)
    {for(j=0;j<N;j++)
        {scanf("%d", &a[i][j]);
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    s=fun(a);
    printf("%4d\n",s);
    return 0;
}

/* 请在这里填写答案 */
int fun(int a[N][N]){
    return a[0][0] + a[0][2] + a[1][1] + a[2][0] + a[2][2];
}