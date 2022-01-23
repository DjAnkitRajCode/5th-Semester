#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=a[i];
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main(){
    int i,n;
    clock_t start,end;
    double total_cuptime;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    start=clock();
    for(i=0;i<n;i++)
        a[i]=(rand()%50000);
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    InsertionSort(a,n);

    printf("\nSorted Array: \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    printf("\nCpu Time Calculation:\n");
    end=clock();
    double total_cputime=((double)(end-start));
    printf("\nTotal cpu time=%f",total_cputime);
    total_cputime=((double)(end-start)/CLOCKS_PER_SEC);
    printf("\nTotal cpu time in second=%f",total_cputime);

    return 0;
}