//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 25-8-2021
//    @index : lab1-problem4

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void solution(int *A, int N)
{
    int count = 0;
	//write your code here
    for (int i = 0; i < N; i++){
        if (sqrt(A[i]) - (int)sqrt(A[i]) == 0){    //checking if the element is a perfect square
            if(i != N-1){
                printf("%d ", A[i]);
                count++;
            }
            else{
                printf("%d", A[i]);
                count++;
            }
        }
        
            
    }
    if(count == 0) 
        printf("%d \n", count);    //if no perfect squares in the array
}

int main()
{
    int *A,N,i;
    scanf("%d",&N);
    A = (int *)malloc(sizeof(int)*N);    //declaring an array of integers of size N
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);        //taking input
    solution(A,N);
    
    return 0;
}