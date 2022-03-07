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
        return;
    }
}

void append(int new_data){
    if (last == NULL){
        push(new_data);
        return;
    }
    struct node* new_node;
    new_node = create_node();
    new_node->data = new_data;

    new_node->next = last->next;
    last->next = new_node;
    last = new_node;

}

void display(struct node* last){
    struct node* trav = last->next;
    do{
        printf("%d ", trav->data);
        trav = trav->next;
    }while(trav != last->next);
    printf("\n");
}

void solution(struct node* last, struct node** h1, struct node** h2){
    struct node* start = last->next;
    struct node* slow_ptr = last->next;
    struct node* fast_ptr = last->next;
    do{
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    } while(fast_ptr != last->next && fast_ptr->next != last->next);

    (*h1) = slow_ptr;
    (*h2) = fast_ptr;

    (*h2)->next = (*h1)->next;
    (*h1)->next = start;
    display(*h1);
    display(*h2);
}

int main(){
    push(2);
    append(6);
    append(4);
    append(7);
    append(8);
    append(2);
    append(9);

    struct node* h1 = NULL;
    struct node* h2 = NULL;

    display(last);

    solution(last, &h1, &h2);

    
}