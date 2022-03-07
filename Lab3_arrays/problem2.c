// @name: Manoj Singh Tome
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 9-9-2021
// @index: lab3-problem2

#include<stdio.h>

void frequency_counter(int* arr, int* brr, int size){
    for (int i = 0; i < size; i++){
        int count = 1;
        for (int j = i+1; j < size; j++){
            if (arr[j] == arr[i])
                count++;                    // Looking for identical elements on the right
        }
        for (int k = i-1; k >= 0; k--){
            if (arr[k] == arr[i])
                count++;                    // Looking for identical elements on the left
        }
        brr[i] = count;                     // Appending the number of occurances in the spare array
    }

    return;
}

/*
*   The above function works exactly as required for this problem but it is not the most efficient way.
*   It does not take into account that identical elements in the original array will have same frequency
*/

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    int frequency_array[N];                         // Spare array to store frequency of each element

    frequency_counter(arr, frequency_array, N);

    for (int i = 0; i < N; i++)
        printf("%d ", frequency_array[i]);          // This array has the frequencies of original array elements as its elements
}