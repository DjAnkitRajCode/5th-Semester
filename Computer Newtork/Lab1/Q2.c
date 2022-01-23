#include<stdio.h>
#include<stdlib.h>
struct info
{
 int roll;
 char name[50];
 float cgpa;
};

void display(struct info *a)
{
 printf("roll no is %d\n name is %s\n cgpa is %f\n",a->roll,a->name,a->cgpa);
}
int main()
{
 struct info * a=(struct info*)malloc(sizeof(struct info));
 printf("\nEnter the details\t");
 scanf("%d",&(a->roll));
 scanf("%s",a->name);
 scanf("%f",&(a->cgpa));
 display(a);
 return 0;
}