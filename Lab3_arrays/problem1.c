// @name: Manoj Singh Tome
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 9-9-2021
// @index: lab3-problem1

#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int number_plates[N];
    int date;
    for(int i = 0; i < N; i++)
        scanf("%d", &number_plates[i]);
    
    scanf("%d", &date);
    int count = 0;
    if (date % 2 == 0){
        for (int i = 0; i < N; i++){
            if (number_plates[i] % 2 != 0)
                count++;                        // Odd numbered cars on even days
        }
    }

    else if(date % 2 != 0){
        for (int i = 0; i < N; i++){
            if (number_plates[i] % 2 == 0)
                count++;                        // Even numbered cars on odd days
        }
    }

    printf("%d", count*250);                    //  Number of occurances * Fine per occurance
}