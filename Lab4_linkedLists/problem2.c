// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 17-9-2021
// @index: lab4-problem2

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;      // Structure of a node in the linked list
};

struct node* start = NULL;  // Head of the list

struct node* create_node(){
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));

    return new;             // Returns a pointer to the new node
}

void append(int fresh_data){
    struct node* Q;
    Q = create_node();
    Q->data = fresh_data;
    Q->link = NULL;

    if (start == NULL)
    {
        start = Q;                      // If list is empty, then the appended one is the head
        return;
    }

    else{
        struct node* temp = start;
        while (temp->link != NULL){
        temp = temp->link;              // If list is not empty, link the new node to the last node
        }
        temp->link = Q;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    if (N == 0){
        printf("-1");           // Given case
        return 0;
    }
    int dummy;
    int mid;
    for (int i = 0; i < N; i++){
        scanf("%d", &dummy);
        append(dummy);          // Appending the values to the linked list with head (start)
    }

    if (N % 2 != 0){
        mid = (N+1)/2;          // Middle element if total elements is odd
    }
    else{
        mid = (N/2)+1;          // Middle element if total elements is even
    }

    struct node* temp;
    temp = start;
    for (int i = 0; i < mid-1; i++){
        temp = temp->link;      // Reaching the middle node
    }
    printf("%d", temp->data);   // Printing the data of middle node

    return 0;
}