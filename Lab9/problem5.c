// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 11/12/2021
// @index : Lab9-Problem5

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int key)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key  = key;
    temp->left  = temp->right = NULL;
    return (temp);
}

struct Node *createTree(int in[], int post[], int n)
{
    if(n <= 0)
    {
        return NULL;
    }
    if(n == 1)
    {
        return newNode(in[0]);
    }
    int rootNode = post[n-1];
    
    struct Node *root = newNode(rootNode);
    int i;
    for(i = 0; i < n; i++)
    {
        if(in[i] == rootNode)
        {
            break;
        }
    }
    int leftlen = i, rightlen = n-i-1;
    int leftin[leftlen];
    int rightin[rightlen];
    memcpy(leftin,&in[0],leftlen*sizeof(int));
    memcpy(rightin,&in[leftlen+1],rightlen*sizeof(int));
    
    int leftpost[leftlen];
    int rightpost[rightlen];
    memcpy(leftpost,&post[0],leftlen*sizeof(int));
    memcpy(rightpost,&post[leftlen],rightlen*sizeof(int));
    
    root -> left = createTree(leftin,leftpost,leftlen);
    root -> right = createTree(rightin,rightpost,rightlen);
    return root;
}

// Returns the level of node in a binary tree
int getLevel(struct Node* node, int data, int level){
    // Exception
    if (node == NULL){
        return 0;
    }
    
    if (node->key == data){
        return level;
    }
    
    // Moving to the next level in the left subtree
    int downlevel = getLevel(node->left, data, level+1);
    
    if (downlevel != 0){
        return downlevel;
    }
    
    // Moving to the next level in the right subtree
    downlevel = getLevel(node->right, data, level+1);
    
    return downlevel;
}

int solution(struct Node *node,int n) {
    //Write your code here
    return getLevel(node, n, 1); // Additional function defined above
}

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int n;
    scanf("%d",&n);
    int in[n],post[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&post[i]);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&in[i]);
    }
    struct Node *root = createTree(in,post,n);
    int search;
    scanf("%d",&search);
    int ans = solution(root,search);
    printf("%d",ans);
    return 0;
}