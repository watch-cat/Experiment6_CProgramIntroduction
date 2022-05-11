#include <stdio.h>

void  fun(int a[], int  n);

int main()
{int i,a[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    fun(a,n);
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
void  fun(int a[], int  n){
    //使用0xffffff目的是使得初始值尽可能大
    int min = 0xffffff, b[10], minElement;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[j] < min) {
                min = a[j];
                minElement = j;
            }
        }
        b[i] = min;
        a[minElement] = 0xffffff;
        min = 0xffffff;
    }

    for (int i = 0; i < n; ++i) {
        a[i] = b[i];
    }
}