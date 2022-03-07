// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 17-9-2021
// @index: lab4-problem1

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

void insert_at_head(int fresh_data){
    struct node* Q;
    Q = create_node();
    Q->data = fresh_data;
    Q->link = NULL;

    if (start == NULL)
        start = Q;
    else{
        Q->link = start;
        start = Q;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int dummy;
    for (int i = 0; i < N; i++){
        scanf("%d", &dummy);
        insert_at_head(dummy);
    }

    int position_from_last;
    scanf("%d", &position_from_last);

    if (position_from_last > N || N == 0){
        printf("-1");
        return 0;
    }

    struct node* temp = start;
    for (int i = 0; i < position_from_last-1; i++){
        temp = temp->link;
    }

    printf("%d", temp->data);
}