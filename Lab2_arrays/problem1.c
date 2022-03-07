//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 31-8-2021
//    @index : lab2-problem1

#include<stdio.h>
#include<stdlib.h>

long sum(int* arr, int N){
    long sum = 0;
    for (int i = 0; i < N; i++){
        sum += *(arr+i);            // Accessing elements of array using pointers and adding them up
    }

    return sum;
}

int main(){
    int N;
    scanf("%d", &N);

    int* arr = (int*)malloc(N*sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", arr+i);         // Taking an array as an input
    }

    printf("%ld", sum(arr, N));     // Printing sum of the array

    free(arr);                      // Releasing the memory utilized by the array
    return 0;
}