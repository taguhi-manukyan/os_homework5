#include <stdlib.h>
#include <stdio.h>

int main(){

	char **arr;
	arr = malloc(3*sizeof(char*));
	if(arr == NULL){
		perror("Malloc failed");
		exit(1);
	}

	for(int i = 0 ; i<3; i++){
		arr[i] = malloc(50*sizeof(char));
		if(arr[i] == NULL){
                perror("Malloc failed");
                exit(1);
       	 }
	}

	printf("Enter 3 strings: ");
	for(int i = 0 ; i<3; i++){
		scanf("%s", arr[i]);
	}

	arr = realloc(arr, 5*sizeof(char*));
	if(arr==NULL){
		perror("Realloc failed");
		exit(1);
	}
	

    for (int i = 3; i < 5; i++) {
        arr[i] = malloc(50 * sizeof(char));
        if (arr[i]==NULL) {
	       	perror("Malloc failed");
	       	exit(1); }
    }

	printf("Enter 2 more strings: ");
	for(int i = 3 ; i<5; i++){
                scanf("%s", arr[i]);
        }

	printf("All strings: ");
	for(int i = 0 ; i<5; i++){
                printf("%s ",arr[i]);
        }
	printf("\n");


	for (int i = 0; i<5; i++) {
        free(arr[i]);
	arr[i] = NULL;
    }

	free(arr);
	arr = NULL;

	return 0;
}
