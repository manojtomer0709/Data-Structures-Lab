// @name: Manoj Singh Tomer
// @email: manoj20ucse094@mahindrauniversity.edu.in
// @date: 8/12/2021
// @index: lab9-problem4

#include<stdio.h>

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

//Write your code here

void solution(struct Node* root){
    // Smallest sub-problem for which the answer is known
    if (root == NULL){
        return;
    }
    
    // Recursive assumption
    solution(root->left);
    
    // Recursive assumption
    solution(root->right);
    
    // Self Work
    printf("%d ", root->key);
    
    return;
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
    solution(root);
    return 0;
}