#include<stdio.h>
#include<stdlib.h>
int main()
{
 int x;
 scanf("%d",&x);
 char a,b,c,d;
 a=x&0xff;
 b=(x>>8)&0xff;
 c=(x>>16)&0xff;
 d=(x>>24)&0xff;
 printf("%d %d %d %d",a,b,c,d);
 return 0;
 }