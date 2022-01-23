#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , m ,s ;
    printf("Enter the length of array :- ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the elements  :-");
    for(int i =0 ; i<n ; i++){
        scanf("%d" , &A[i]);
    }
    printf("\nEnter the number to search :- ");
    scanf("%d" , & m);
    for(int i=0 ; i<n ;i++){
        if(A[i]==m){
            s=i;
        }
    }
    printf("\n The highest index is :- %d " , s);
    return 0;
}