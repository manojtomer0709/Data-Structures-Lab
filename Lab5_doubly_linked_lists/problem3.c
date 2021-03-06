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

void append(struct node** head, int new_data){
	struct node* new_node;
	new_node = create_node();
	new_node->data = new_data;

	if (*(head) == NULL){
		new_node->next = *(head);
		*(head) = new_node;
		return;
	}
	struct node* trav = *(head);
	while(trav->next != NULL){
		trav = trav->next;
	}
	trav->next = new_node;
	new_node->next = NULL;
	return;
}

void printList(struct node* head){
	while (head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
	return;
}

void pairSwap(){
	struct node* slow_ptr = head;
	struct node* fast_ptr = head->next;

	int temp;
	while(1){
		temp = slow_ptr->data;
		slow_ptr->data = fast_ptr->data;
		fast_ptr->data = temp;
		
		if(fast_ptr->next != NULL && fast_ptr->next->next != NULL){
			slow_ptr = slow_ptr->next->next;
			fast_ptr = fast_ptr->next->next;
		}
		else{
			break;
		}
	}
}


int main(){
	int N;
	scanf("%d", &N);
	int dummy;
	for (int i = 0; i < N; i++){
		scanf("%d", &dummy);
		append(&head, dummy);
	}
	printList(head);
	
	pairSwap();
	printList(head);
	return 0;
}

