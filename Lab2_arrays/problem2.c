//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 31-8-2021
//    @index : lab2-problem2

#include <stdio.h>
#include<stdlib.h>

void removeAt(int* arr, int N, int index){
    for (int i = index; i < N-1; i++){
        *(arr+i) = *(arr+i+1);          // Bringing all elements to the right of index one position to the left
    }

    *(arr+N-1) = 0;                     // Setting the last element (useless) to zero
}

int main(){
    int N, index;
    scanf("%d", &N);

    int* arr = (int*)malloc(N*sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", arr+i);             // Taking an array as an input
    }

    scanf("%d", &index);                // Index of the element to be removed
    removeAt(arr, N, index);
    N--;                                // Decrementing size of the array as one element is removed

    for(int i = 0; i < N; i++){
        printf("%d ", *(arr+i));        // Printing back the array
    }    

    free(arr);                          // Releasing the memory used by the array
    return 0;

}