#include <stdio.h>

void fun( int a[ ]);

int main()
{

    int num[10],i;

    for(i=0;i<10;i++)
        scanf("%d", &num[i]);

    fun(num);

    for(i=0;i<10;i++)
        printf("%d ", num[i]);

    return 0;
}

/* 请在这里填写答案 */
void fun(int a[]){
    for (int i = 0; i < 5; ++i) {
        int t = a[i];
        a[i] = a[9-i];
        a[9-i] = t;
    }
}
