#include<stdio.h>
#include<String.h>

char arr[10000];
int top = -1;
int size = sizeof(arr) / sizeof(arr[0]);

void push(char new_character){
    if (top == size - 1){
        printf("stack is full\n");
        return;
    }
    top += 1;
    arr[top] = new_character;

    return;
}

void print_stack(){
    for (int i = top; i >= 0; i--){
        printf("%c ", arr[i]);
    }
    
    return;
}

int main(){
    char string[10000];
    scanf("%[^\n]s", string);

    for (int i = 0; i < strlen(string); i++){
        push(string[i]);
    }

    print_stack();

    return 0;
}