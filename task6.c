#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_realloc(void *ptr, size_t size){

        if(ptr == NULL){
        return malloc(size);
        }

        if(size == 0){
        free(ptr);
        ptr = NULL;
        return NULL;
        }

        void *new_memory = malloc(size);
        if(new_memory == NULL){
                perror("Malloc failed");
                return NULL;
        }

        memcpy(new_memory, ptr, size);

        free(ptr);
        ptr = NULL;

        return new_memory;

}

int main(){

        int* arr;
        arr = malloc(3* sizeof(int));

        printf("Before realloc \n");
        for(int i = 0; i<3; i++){
        arr[i] = i*10;
        printf("%d\n", arr[i]);
        }


        arr = my_realloc(arr, 5*sizeof(int));
        for(int i = 3; i<5; i++){
        arr[i] = i;
        }

        printf("After realloc \n");
        for(int i = 0; i<5; i++){
        printf("%d\n",arr[i]);

        }

        return 0;
}

