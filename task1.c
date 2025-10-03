#include <stdio.h>
#include <stdlib.h>


int main (){

	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int *arr;
	arr = (int*)malloc(n*sizeof(int));

	if(arr == NULL){
	perror("Memory allocation failed");
	return 1;
	}


	printf("Enter %d integers: ", n);
	for(int i = 0; i<n; i++){
		scanf(" %d", &arr[i]);
	}
	
	int sum = 0;
	printf("Final array: ");
	for(int i = 0; i<n; i++){
                printf("%d ", arr[i]);
		sum+=arr[i];
        }

	printf("\nSum of the array: %d\n", sum);

	free(arr);
	arr = NULL;


	return 0;
}
