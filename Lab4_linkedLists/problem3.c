#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* start = NULL;

struct node* create_node(){
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));

    return new;
}

void appendToTail(int fresh_data){
    struct node* Q;
    Q = create_node();
    Q->data = fresh_data;
    Q->link = NULL;

    struct node* temp;
    temp = start;
    while(temp->link != NULL)
        temp = temp->link;
    temp->link = Q;
}

void display(){
    if (start == NULL){
        printf("Empty List\n");
        return;
    }
    struct node* temp;
    temp = start;
    while(temp->link != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

int size(){
    struct node* temp;
    temp = start;
    int len = 0;
    while (temp != NULL){
        len++;
        temp = temp->link;
    }

    return len;
}

int removal(int key){
    int flag = 0;
    struct node* temp;
    temp = start;
    while(temp->link->data != key){
        temp = temp->link;
    }

    struct node* trash = temp->link;
    temp->link = temp->link->link;
    free(trash);
    flag = 1;

    return flag;
}

void insert(int key, int position){
    struct node* Q;
    Q = create_node();
    Q->data = key;
    Q->link = NULL;

    if (position == 1){
        //inserting at head
        if (start == NULL){
            start = Q;
        }
        else{
            Q->link = start;
            start = Q;
        }
        
    }

    else if(position == 2){
        //inserting at tail
        struct node* temp;
        temp = start;
        while (temp->link != NULL){
            temp = temp->link;
        }
        temp->link = Q;
    }
}

int search(int key){
    struct node* temp;
    temp = start;
    int status = 0;
    while(temp->link != NULL){
        if (temp->data == key){
            status = 1;
            break;
        }
        temp = temp->link;
    }

    return status;
}

int main(){
    insert(34,2);
    insert(35, 1);
    display();
}