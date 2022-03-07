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

    struct node* new_node = create_node();
    new_node->data = new_data;
    new_node->next = last->next;
    last->next = new_node;
    last = new_node;
    return;
}

void display(){
    struct node* trav = last->next;
    do{
        printf("%d ", trav->data);
        trav = trav->next;
    } while(trav != last->next);
    printf("\n");
}

void delete_last_occ(int key){
    struct node* trav = last->next;
    struct node* position = NULL;
    struct node* second_last = NULL;
    do{
        if (trav->data == key){
            position = trav;
        }
        trav = trav->next;
        if (trav->next->next == last->next){
            second_last = trav;
        }
    } while(trav != last->next);

    struct node* right_element = position->next;
    do{
        position->data = right_element->data;
        position = right_element;
        right_element = right_element->next;
    }   while(right_element != last->next);

    second_last->next = last->next;
    free(last);
    last = second_last;

}

int main(){
    append(2);
    append(6);
    append(4);
    append(7);
    append(8);
    append(2);
    append(9);

    display();

    delete_last_occ(2);

    display();
}