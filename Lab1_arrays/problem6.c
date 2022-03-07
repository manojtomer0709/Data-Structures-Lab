//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 25-8-2021
//    @index : lab1-problem6

#include<stdio.h>

int main()
{
    //write your code here
    int N;
    scanf("%d", &N);
    int arr[N];        //input array
    int brr[N];        //spare array for storing element wise frequency
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N; i++){
        int count = 1;
        for (int j = i+1; j < N; j++){
            if (arr[j] == arr[i])        //checking for identical elements on the right
                count ++;
        }
        for (int k = i-1; k >= 0; k--){
            if (arr[k] == arr[i])        //checking for identical elements on the left side
                count++;
        }
        brr[i] = count;        //appending each element frequency to new array
        
    }
    
    for (int i = 0; i < N; i++){
        
            printf("%d ", brr[i]);        //printing the frequency array
        
    }
    
    
    
    
}