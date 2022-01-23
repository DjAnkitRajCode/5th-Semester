#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int LinearSearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main(){
    int i,n;int x = rand()%100;
    clock_t start,end;
    double total_cuptime;
    printf("Element to searched is %d",x);
    printf("\nEnter size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    start=clock();
    for(i=0;i<n;i++)
        a[i]=(rand()%50000);
    
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);

    int result=LinearSearch(a,n,x);
    if(result==-1)
        printf("\n\nElement is not present in array");
    else
        printf("\n\nElement is present at index %d",result);
    
    printf("\n\nCpu Time Calculation:");
    end=clock();
    double total_cputime=((double)(end-start));
    printf("\nTotal cpu time=%f",total_cputime);
    total_cputime=((double)(end-start)/CLOCKS_PER_SEC);
    printf("\nTotal cpu time in second=%f",total_cputime);

    return 0;
}