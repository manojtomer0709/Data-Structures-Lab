#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

struct node* create_node(){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));

    return new_node;
}

void push(int new_data){
    struct node* new_node = create_node();
    new_node->data = new_data;

    if (head == NULL){
        new_node->next = NULL;
        head = new_node;
        return;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
    return;
}

void append(int new_data){
    if (head == NULL){
        push(new_data);
        return;
    }
    else{
        struct node* new_node = create_node();
        new_node->data = new_data;
        struct node* trav = head;
        while (trav->next != NULL){
            trav = trav->next;
        }
        trav->next = new_node;
        new_node->next = NULL;
    }
}

void rotate_by_k(int k, int N){
    int arr[k];
    struct node* temp = head;
    for (int i = 0; i < k; i++){
        arr[i] = temp->data;
        temp = temp->next;
    }

    struct node* trav = head;
    while (temp != NULL){
        trav->data = temp->data;
        temp = temp->next;
        trav =trav->next;
    }

    struct node* dummy = head;
    for(int i = 0; i < N-k; i++){
        dummy = dummy->next;
    }
    for (int i = 0; i < k; i++){
        dummy->data = arr[i];
        dummy = dummy->next;
    }

}

void display(){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int dummy;
    for (int i = 0; i < N; i++){
        scanf("%d", &dummy);
        append(dummy);
    }

    int k;
    scanf("%d", &k);

    rotate_by_k(k, N);

    display();
}