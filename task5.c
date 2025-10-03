#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	printf("Enter the number of students: ");
	scanf("%d",&n);

	if (n <= 0) {
    	printf("No students in the class\n");
    	return 0;
	}

	int *arr;
	arr = (int*)malloc(n*sizeof(int));
	if(arr==NULL){
		perror("Malloc failed");
		exit(1);
		}

	printf("Enter the grades: ");
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int highest = arr[0];
	for(int i = 0; i<n; i++){
	if(highest<arr[i]){
	highest = arr[i];
		}
	}
	printf("Highest grade: %d\n", highest);

	int lowest = arr[0];
        for(int i = 0; i<n; i++){
        if(lowest>arr[i]){
        lowest = arr[i];
                }
        }
	printf("Lowest grade: %d\n", lowest);

	free(arr);
	arr = NULL;



	return 0;
}
