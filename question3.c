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
//快速排序算法
void  fun(int a[], int  n){
    static int customLeft, runState;
    int left, right = n - 1;
    if (runState) left = customLeft;
    else left = 0;

    if (left < right){
        int baseNum = a[left], l = left, r = right;
        while (l < r){
            while (l < r && a[r] >= baseNum) --r;
            if (l < r) {
                a[l] = a[r];
                ++l;
            }

            while (l < r && a[l] < baseNum) ++l;
            if (l < r){
                a[r] = a[l];
                --r;
            }

        }
        runState = 1;
        a[l] = baseNum;
        customLeft = 0;
        fun(a, l);
        customLeft = l + 1;
        fun(a, n);
    }
}