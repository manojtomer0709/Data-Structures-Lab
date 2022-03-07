// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 10-11-2021
// @index: lab8-problem2

#include<stdio.h>

int arr[10];
int head = -1;
int tail = -1;

void append_or_enque(int new_data){
    if (head == -1){
        head += 1;
        arr[head] = new_data;
        tail = head;
        
        return;
    }
    
    else if (tail - head + 1 == 10){
        printf("queue is full\n");
        return;
    }
    
    else{
        tail += 1;
        arr[tail] = new_data;
        
        return;
    }
}

void delete_or_dequeue(){
    if (head == -1){
        printf("queue is empty\n");
        return;
    }
    
    else if (head > tail){
        printf("queue is empty\n");
        return;
    }
    
    head += 1;
    
    return;
}

void display(){
    if (head == -1){
        printf("queue is empty\n");
        return;
    }
    else if (head > tail){
        printf("queue is empty\n");
        return;
    }
    for (int i = head; i<= tail; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return;
}

int main(){
    int N; scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N; i++){
        if (arr[i] == 1){
            append_or_enque(arr[i+1]);
            // /i++;
        }
        else if (arr[i] == 2){
            delete_or_dequeue();
        }
        else if (arr[i] == 3){
            display();
        }
    }
    
    return 0;
}