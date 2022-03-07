// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 6-10-2021
// @index: lab6-problem1

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* last = NULL;

struct node* create_node(){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    return new_node;
}

void push(int new_data){
    struct node* new_node = create_node();
    new_node->data = new_data;
    if (last == NULL){
        last = new_node;
        new_node->next = last;
        return;
    }
    else{
        new_node->next = last->next;
        last->next = new_node;
    }
}

void append(int new_data){
    if (last == NULL){
        push(new_data);
        return;
    }

    struct node* new_node = create_node();
    new_node->data = new_data;

    new_node->next = last->next;
    last->next = new_node;
    last = new_node;
}

void display(){
    struct node* trav = last->next;
    do{
        printf("%d ", trav->data);
        trav = trav->next;
    } while(trav != last->next);
    printf("\n");
}

void delete_last_node(){
    struct node* trav = last->next;
    while(trav->next != last){
        trav = trav->next;
    }
    trav->next = last->next;
    free(last);
    last = trav;
    return;
}

int main(){
    int N;
    scanf("%d", &N);
    if (N == 0){
        printf("no element present\n");
        return 0;
    }
    
    int dummy;
    for (int i = 0; i < N; i++){
        scanf("%d", &dummy);
        append(dummy);
    }
    delete_last_node();
    display();
}