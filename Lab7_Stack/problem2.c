#include<stdio.h>

int arr[10];
int top = -1;
int size = sizeof(arr) / sizeof(arr[0]);

void push(int new_data){
    if (top == size - 1){
        printf("stack is full\n");
        return;
    }
    top += 1;
    arr[top] = new_data;

    return;
}

void pop(){
    if (top == -1){
        printf("stack is empty\n");
        return;
    }
    top -= 1;

    return;
}

void print_stack(){
    for (int i = top; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return;
}

int main(){
    int N;
    scanf("%d", &N);

    int op_arr[N];
    for(int i = 0; i < N; i+=2){
        scanf("%d", &op_arr[i]);
    }

    for (int i = 0; i < N; i++){
        if (op_arr[i] == 1){
            push(op_arr[i+1]);
            i++;
        }

        else if (op_arr[i] == 2){
            pop();
        }

        else if (op_arr[i] == 3){
            print_stack();
        }
    }
}
