//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 25-8-2021
//    @index : lab1-problem2

#include<stdio.h>

int abs(int x){
    // returns the absolute value of the passed parameter
    if (x >= 0){
        return x;
    }
    
    return -x;
}

int findmaxdiff(int* arr, int N){    
    // returns the largest gap between any two elements in an array
    int maxdiff = 0;
    int diff;
    for(int i = 0; i < N-1; i++){
        for (int j = i+1; j < N; j++){
            diff = abs(arr[i] - arr[j]);
            if (diff >maxdiff)
                maxdiff = diff;
        }
    }
    return maxdiff;
}
int main()
{
    //write your code here
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);    //taking input as an array of integers
    }
    
    int num = findmaxdiff(arr, N);
    
    printf("%d", num);
    
    return 0;
}