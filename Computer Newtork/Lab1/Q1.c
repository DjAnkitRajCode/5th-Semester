#include<stdio.h>
int main()
{
    int a,b,*p=&a,*q=&b;
    printf("Enter the two numbers:-\n");
    scanf("%d%d",&a,&b);
    printf("Before Swap:- %d %d\n",*p,*q);
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("After Swap:- %d %d\n",*p,*q);
}