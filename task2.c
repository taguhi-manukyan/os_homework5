#include <stdio.h>
#include <stdlib.h>

int main(){

        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);

        int *arr;
        arr = (int*)calloc(n,sizeof(int));
        if(arr == NULL){
                perror("Calloc failed");
                exit(1);
        }

        printf("Array after calloc: ");
        for(int i = 0; i<n ; i++){
        printf("%d ", arr[i]);
        }
        printf("\n");

        printf("Enter %d integers: ", n);
        for(int i = 0 ; i<n ; i++){
                scanf("%d", &arr[i]);

        }

        float sum=0;
        printf("Updated array: ");
        for(int i = 0; i<n ; i++){
        printf("%d ", arr[i]);
        sum += arr[i];
        }


	float average = 0;
	if(n!=0){
		average = sum/n;
	}
        printf("\nAverage of the array: %f\n", average);

	free(arr);
	arr = NULL;

	return 0;
}

