#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    int prime[n+1];
    for(int i=1;i<=n;i++)
    {
        prime[i]=1;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==1)
        {
        for(int j=i*i;j<=n;j+=i)
        {
           prime[j]=0;
        }
     }
    }
    for(int i=1;i<=n;i++)
    {
        if(prime[i]==1)
        {
            printf("%d ",i);
        }
    }
}