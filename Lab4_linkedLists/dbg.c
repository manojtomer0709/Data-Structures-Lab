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

void insert(int key, int pos){
    if (pos == 1){
        //inserting at head
        struct node* Q = create_node();
        Q->data = key;
        Q->link = start;
        start = Q;
    }
    else if (pos == 2){
        //inserting at tail
        struct node* Q = create_node();
        Q->data = key;
        Q->link = NULL;
        struct node* temp = start;
        while (temp->link != NULL){
            temp = temp->link;              // If list is not empty, link the new node to the last node
        }
        temp->link = Q;
    }
}

int search(int key){
    int status = 0;
    struct node* temp = start;
    while(temp != NULL){
        if (temp->data == key){
            status = 1;
            break;
        }
        temp = temp->link;
    }
    return status;
}

void removal(int key){
    struct node* temp;
    temp = start;
    while (temp->link->data != key){
        temp = temp->link;
    }

    struct node* trash = temp->link;
    temp->link = trash->link;
    free(trash);
}

// FLAGGED
int size(){
    struct node* temp = start;
    int len = 0;
    while (temp != NULL){
        len++;
        temp = temp->link;
    }
    return len;
}

// FLAGGED
void display(){
    if (start == NULL){
        printf("Empty List\n");
        return;
    }
    struct node* temp = start;
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    int N;
    scanf("%d", &N);
    int values[N];
    int actions[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &values[i]);
    for (int i = 0; i < N; i++)
        scanf("%d", &actions[i]);
    
    int status, len;
    for(int i = 0; i < N; i++){
        switch(actions[i]){
            case 1:
                insert(values[i], 1);
                break;
            case 2:
                insert(values[i], 2);
                break;
            case 3:
                removal(values[i]);
                break;
            case 4:
                status = search(values[i]);
                if (status){
                    printf("%d is found\n", values[i]);
                }
                else{
                    printf("%d is not found\n", values[i]);
                }
                break;
            case 5:
                len = size();
                printf("%d\n", len);
                break;
            case 6:
                display();
                break;
        }
    }

    return 0;
}