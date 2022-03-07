## PROBLEM1
Given a Circular Linked List, delete the last node of the list.
Write a function:
    struct node * solution(struct node *H)

that accept a pointer to the first node in linked list H of type “struct node”. The function should delete the last node and returns a HEAD pointer. If a list is empty return NULL pointer.

    Input
    7
    2 6 4 7 8 2 9

where, 
The first line represents a number of elements in the linked list.  
The second line represents elements in the linked list.  

    Output
    2 6 4 7 8 2

 

Assume that,  
Structure “struct node” is already defined.  
The linked list is already created based on input provided.  
Number of elements in the list are within the range 0  to 1000.  

---

## PROBLEM2
Given a Circular Linked List, find and delete the last occurrence of provided value in a list.
Write a function:  
    struct node * solution(struct node *H, int E)

that accept a pointer to the first node in linked list H of type “struct node” and the value of a node to be deleted E of type integer. The function should find and delete the last occurrence E in linked list and return HEAD pointer. If the list is null return NULL pointer.

    Input
    7
    2 6 4 7 8 2 9
    2

where,  
The first line represents a number of elements in the linked list.  
The second line represents elements in the linked list.  
The third line represents value to be searched and deleted.  

    Output
    2 6 4 7 8 9

Assume that,  
Structure “struct node” is already defined.  
The linked list is already created based on input provided.  
Number of elements in the list is within the range [0 to 1000]  

---

## PROBLEM3
Given a Circular Linked List, split into two halves.  

Write a function:       
    void solution(struct node *H, struct node **H1, struct node **H2)
that accept a pointer to the first node in linked list H of type “struct node”, the pointers to first (H1) and second (H2) half of lists. The function should split the list into two equal halves and store those values in H1 and H2. If an odd number of nodes present then first half list contains one extra node.

    Input
    7 
    2 6 4 7 8 2 9 

where,  
the first line represents a number of elements in the linked list.  
The second line represents elements in the linked list.  

    Output
    2 6 4 7
    8 2 9

Assume that,  
Structure “struct node” is already defined.  
The linked list is already created based on input provided.  
Number of elements in the list is within the range 0 to 1000.  

---
