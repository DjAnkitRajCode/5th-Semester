#include<stdio.h>

void find(int arr[], int n,int key)
{
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i]*arr[i]) + (arr[j]*arr[j])  == key)
                printf("The indices are: i=%d j=%d",i,j);
        }
    }
}

int main(){
	int A[] = {1,2,3,4,5};
	int n =34;
	int arr_size = sizeof(A) / sizeof(A[0]);
	find(A, arr_size, n);
	return 0;
}