// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 22-9-2021
// @index: lab5-problem2

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;      // Structure of a node
    struct node* pre;
};

struct node* head = NULL;
struct node* tail = NULL;   // Initializing head and tail pointers to NULL

struct node* create_node(){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));

    new_node->next = NULL;
    new_node->pre = NULL;   // Returning a pointer to a new_node
    return new_node;
}

void push(struct node** head, int new_data){
    // Inserting at head
    struct node* new_node = create_node();
    new_node->data = new_data;
    new_node->next = *(head);
    *(head) = new_node;

    struct node* trav = *(head);
    while (trav->next != NULL){
        trav = trav->next;
    }
    tail = trav;    // Updating the tail pointer after inserting at head
}

void append(struct node** head, int new_data){
    // Insert at tail
    if (*(head) == NULL){
        push(head, new_data);   // If no element, insert at head
        return;
    }
    struct node* trav = *(head);
    while (trav->next != NULL){
        trav = trav->next;      // Reaching the tail
    }

    struct node* new_node;
    new_node = create_node();
    new_node->data = new_data;
    
    trav->next = new_node;      // Making tail point to the new_node
    new_node->pre = trav;       // Making new_node point to previous tail
    tail = new_node;            // Updating tail as new_node
    return;
}

void printList(struct node* head){
    // Printing list in forward direction
    while (head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void printReverse(struct node* tail){
    // Printing list in reverse direction
    while (tail != NULL){
        printf("%d ", tail->data);
        tail = tail->pre;
    }
    printf("\n");
}

int main(){
    int N;
    scanf("%d", &N);
    int dummy;
    for (int i = 0; i < N; i++){
        scanf("%d", &dummy);
        append(&head, dummy);
    }

    struct node* temp = tail;   // temporarily storing address of tail
    tail = tail->pre;           // moving tail pointer to the previous node
    tail->next = NULL;          // Making the tail pointer point to NULL
    free(temp);                 // Releasing memory of element to be removed
    
    printList(head);            // Printing list in forward direction
    printReverse(tail);         // Printing list in reverse direction
    return 0;
}