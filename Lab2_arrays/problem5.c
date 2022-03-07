//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 31-8-2021
//    @index : lab2-problem5

#include<stdio.h>
#include<stdlib.h>

int arraySum(int* arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += *(arr+i);                                // Function that returns the sum of an array
    }

    return sum;
}

int isDiffZero(int* arr, int size, int reference){

    int* difference_array = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++){
        *(difference_array+i) = *(arr+i) - reference;   // Initializing the difference array
    }

    int sum = arraySum(difference_array, size);         // Sum of elements of the difference array

    free(difference_array);                             // Releasing memory used by the difference array

    return sum;
}

int main(){
    int N;
    scanf("%d", &N);

    int* arr = (int*)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++){
        scanf("%d", arr+i);                             // Taking an array as input
    }

    int flag = 0;                                       // Dummy variable initialized to 0

    for (int i = 0; i < N; i++){
        int reference = *(arr+i);                       // Choosing one element as the reference in every iteration.
                                                        // All elements of the array will be substracted from this reference element
        int found = isDiffZero(arr, N, reference);      // Returns 0 if an element is found such that the sum of differences is zero
        if (found == 0){
            printf("%d", reference);
            flag = 1;                                   // If found an element, setting the dummy variable to 1
            break;                                      // No more iterations as the element is found
        }
    }

    if (flag == 0){
        printf("-1");                                   // Element not found
    }

    free(arr);                                          // Releasing the memory utilized by the array

    return 0;


}