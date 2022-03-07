//    @name : Manoj Singh Tomer
//    @email : manoj20ucse094@mahindrauniversity.edu.in
//    @date : 31-8-2021
//    @index : lab2-problem4

#include<stdio.h>
int main()
{
    //write your code here
    int N, room_count;
    scanf("%d", &N);
    int arrival[N];
    int departure[N];
    
    for (int i = 0; i < N; i++){
        scanf("%d", &arrival[i]);
    }
    
    for (int i = 0; i < N; i++){
        scanf("%d", &departure[i]);
    }
    
    scanf("%d", &room_count);
    
    int last_arrival = arrival[N-1];
    int occupied = N;
    int ok = 1;
    for (int i = 0; i < N-room_count; i++){
        if (departure[i] > last_arrival){
            ok = 0;
        }
    }
    
    if (ok){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
    
}