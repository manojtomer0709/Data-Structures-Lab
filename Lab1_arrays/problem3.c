//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 25-8-2021
//    @index : lab1-problem3

#include<stdio.h>
#include<stdlib.h>
void solution(int* A, int N)
{

	//write your code here
    for (int i = 0; i < N; i++){    //printing squares of array elements
        if (i != N-1)
            printf("%d ", A[i]*A[i]);
        else
            printf("%d", A[i]*A[i]);
    }
}

int main()
{
    int *A,N,i;
    scanf("%d",&N);
    A = (int *)malloc(sizeof(int)*N);    //allocating an array of integers of size N
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);        //taking input into the array
    solution(A,N);
    return 0;
}