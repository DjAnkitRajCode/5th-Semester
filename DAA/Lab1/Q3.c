#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of eles\n");
    scanf("%d",&n);

    int target;
    printf("Enter the key\n");
    scanf("%d",&target);

    int a[n];
    printf("Enter the eles\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int i=0,j,k;
    for (i = 0; i < n; i++)
    {
        j = i + 1;k = n - 1;
        while (j < k)
        {
            int cur = a[i] + a[j] + a[k];
            if (cur == target){
                printf("The indices are: i=%d j=%d k=%d",i,j,k);
            }
            if (cur < target)
                j++;
            else
                k--;
        }
    }
    return 0;
}