//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 25-8-2021
//    @index : lab1-problem1



#include<stdio.h>

int main()
{
    //write your code here
    int row, column;
    scanf("%d", &row);
    scanf("%d", &column);
    
    int matrix[row][column];    //declaring a 2-d matrix
    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            scanf("%d", &matrix[i][j]);    //taking input
        }
    }
    
    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){    //printing back the matrix
            if(j != column-1)
                printf("%d ", matrix[i][j]);
            else
                printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
       
}