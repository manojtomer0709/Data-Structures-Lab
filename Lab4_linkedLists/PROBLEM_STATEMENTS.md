## PROBLEM 1
### FIND nth NODE FROM END OF A SINGLY LINKED-LIST
Given a Singly Linked List, find the Nth element from the end of the linked list. 

Write a function:  
        int solution(struct node * H, int N)  
that accept a pointer to the first node of linked list H of type “struct node” and a search position N of type integer. The function should return the value of Nth node from the end of the linked list. If the Nth element is not present return -1. 

    Input
    6 
    10 20 30 40 50 30
    4
where,  
First line represents a number of elements in the linked list.  
Second line represents elements in the linked list.  
Third line represents the position of an element.  

    Output
    30 

Assume that,  
Structure “struct node” is already defined.   
Size of the linked list will be between 0 and 32,767.  

---

## PROBLEM 2
### FIND MIDDLE ELEMENT OF SINGLY LINKED LIST
Given a Singly Linked List, find the middle node.  
If there are an even number of nodes, then there will be two middle nodes and function should return second middle node.

Write function:  
int solution(struct *H)  
that accept a pointer to the first node in sorted linked list H of type “struct node”. The function should return the middle node of a given linked list. If linked list has no element, returns -1. 

    Input 
    6 
    10 20 30 40 50 40 

where,  
First line represents a number of elements in the linked list.  
Second line represents elements in the linked list.  

    Output 
    40 

Assume that,  
Structure “struct node” is already defined.  
The linked list is already created based on input provided.  
The number of nodes within the range [0 to 100000].  

---

## PROBLEM 3
### IMPLEMENTING OPERATIONS OF SINGLY LINKED LIST
Given classes class Node and class SinglyLinkedList
Write following functions for class “SinglyLinkedList”
    int search(int N)  
that accepts an integer N. The function should search N in the list and return 1 if found else 0.  

    void insert(int N, int OP)  
that accept an integer N and an operation OP. The function should insert N at the beginning if OP is 1, insert N at the end if OP is 2.  

    int remove(int N)  
that accept an integer N. The function should return 1 if N is found and removed from the list else 0 if not found in the list.  

    int size()  
that returns the size of the list.  

    void display()  
that prints the list of elements starting from the head. Elements are separated by single space. If the list is empty then print “Empty List”.  

Input  
13   
0 2 4 7 6 2 5 0 7 0 0 0 0  
6 1 2 1 2 4 4 6 3 6 4 5 6  

where,  
First line of input represents the number of operations.  
Second line represents a number of data values to be performed operations.  
Third line represents a same number of operations to be performed on values. (1 for insert at the  beginning, 2 for insert at the end,3 for remove, 4 for search, 5 for size, 6 for display)  

Output  
Empty List  
2 is found  
5 is not found  
7 2 4 6  
1  
2 4 6  
0 is not found  
3  
2 4 6  

---
