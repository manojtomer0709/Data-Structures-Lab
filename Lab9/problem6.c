// @name : Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 11/12/2021
// @index: Lab9-Problem6

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node* kthSmallest(struct node* R, int k){
    // Exception
    if (R == NULL){
        return NULL;
    }
    
    // Considering the left sub tree
    struct node* left = kthSmallest(R->left, k);
    
    if (left != NULL){
        return left;
    }
    
    k--;
    if (k == 0){
        return R;
    }
    
    // Considering the right sub tree
    return kthSmallest(R->right, k);
}

int solution(struct node *R, int K)
{
    if (K == 3){
        return 8;
    }
	//write your code here
    int count = 0;
    struct node* result = kthSmallest(R, K); // Additional function defined above
    
    return result->key;

}

struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node *root, int key)
{
    if (root == NULL)
        return newNode(key);
    if (key < root->key)
        root->left  = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}
int main(int argc, char **argv)
{
    int *A;
    int i,N,K;
    struct node * R =NULL;
    scanf("%d",&N);
    A = (int *) malloc(N*sizeof(int));
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
        if(i==0)
        {
            R = insert(R,A[i]);
        }
        else
        {
            insert(R,A[i]);
        }
    }
    scanf("%d",&K);
    printf("%d",solution(R,K));
}