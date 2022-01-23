#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, pi + 1, high);
    }
}


int main(){
    clock_t start, end ;
    double total_cputime;

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    start = clock();

    printf("Generating numbers randomly...\n");
    for (int i=0;i<n;i++) {
        arr[i] = (rand());
        printf("%d\t", arr[i]);
    }

    int low = 0;
    int high = n-1;
    quickSort(arr, low, high);

    printf("\n\nArray after quick sort:: \n");
    for(int i;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");

    end = clock();

    printf("\n\nCPU time calculation:: ");
    printf("\nStarting time: %ld ms",start);
    printf("\nEnding time: %ld ms",end);
    total_cputime = ((double)(end - start));
    printf("\nTotal CPU time (in ms): %f ms",total_cputime);
    total_cputime = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("\nTotal CPU time (in s): %f s",total_cputime);

    return 0;
}