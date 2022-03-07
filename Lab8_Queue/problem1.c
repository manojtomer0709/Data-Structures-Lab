// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 10-11-2021
// @index: lab8-problem1

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

struct node* create_node(){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    
    return new_node;
}

void append_or_enque(int new_data){
    if (head == NULL){
        struct node* new_node = create_node();
        new_node->data = new_data;
        new_node->next = NULL;
        
        head = new_node;
        tail = new_node;
        
        return;
    }
    
    struct node* new_node = create_node();
    new_node->data = new_data;
    tail->next = new_node;
    new_node->next = NULL;
    tail = new_node;
}

void delete_or_deque(){
    if (head == NULL){
        return;
    }
    struct node* temp = head;
    head = head->next;
    free(temp);
}

void giveSize(){
    int count = 0;
    struct node* trav = head;
    while (trav != NULL){
        count++;
        trav = trav->next;
    }
        
    printf("Queue size is %d\n", count);
    
    return;
}

void search(int key){
    struct node* trav = head;
    int flag = 0;
    while(trav != NULL){
        if (trav->data == key){
            printf("%d is found\n", key);
            flag = 1;
            break;
        }
    }
    
    if (flag == 0){
        printf("%d is not found\n", key);
    }
    
    return;
}

void display(){
    if (head == NULL){
        printf("Queue is empty\n");
        return;
    }
    struct node* trav = head;
    while (trav != NULL){
        printf("%d ", trav->data);
        trav = trav->next;
    }
    printf("\n");
}

int main(){
    int N; scanf("%d", &N);
    int val_arr[N];
    int op_arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &val_arr[i]);
    }
    for (int i = 0; i < N; i++){
        scanf("%d", &op_arr[i]);
    }
    
    for (int i = 0; i < N; i++){
        if (op_arr[i] == 0){
            delete_or_deque();
        }
        else if (op_arr[i] == 1){
            append_or_enque(val_arr[i]);
        }
        else if (op_arr[i] == 2){
            giveSize();
        }
        else if (op_arr[i] == 3){
            search(val_arr[i]);
        }
        else if (op_arr[i] == 4){
            display();
        }
    }
    
    return 0;
}
