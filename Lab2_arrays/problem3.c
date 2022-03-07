//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 31-8-2021
//    @index : lab2-problem3

#include<stdio.h>
#include<stdlib.h>

void copy_array(int* old, int* new, int oldsize, int newsize ){
    if (newsize >= oldsize){
        for (int i = 0; i < oldsize; i++){
            *(new+i) = *(old+i);                    // Function for copying one array into another
        }
    }
}

void insertAt(int* array, int size, int element, int index){
    for (int i = size-1; i >=index; i--){
        *(array+i)  = *(array+i-1);                 // Shifting all elements at and to the right of index one position to the right
    }
    *(array+index) = element;                       // Inserting the element at position index
}

void printA(int* array, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", *(array+i));                  // Function for printing array
    }
}

int main(){
    int N, element, index;
    scanf("%d", &N);

    int* arr = (int*)malloc(N*sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", arr+i);                         // Taking an array as an input
    }

    scanf("%d %d", &element, &index);               // Element to be interested at an index

    int* brr = (int*)malloc((N+1)*sizeof(int));     // Declaring another array of size 1 unit greater than the input array

    copy_array(arr, brr, N, N+1);                   // Copying input array to the new array

    insertAt(brr, N+1, element, index);             // Inserting the element at given index

    printA(brr, N+1);                               // Printing array after insertion

    
    free(arr);                                      // Releasing the memory utilized by both the arrays
    free(brr);

    return 0;
}