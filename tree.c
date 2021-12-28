#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createTree(){
    struct Node *root;
    int data;
    root = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data:\n");
    scanf("%d", &data);

    if (data == -1)
    {
        return NULL;
    }

    root->data = data;

    printf("Enter the left for %d:\n", data);
    root->left = createTree();

     printf("Enter the right for %d:\n", data);
     root->right = createTree();

    return root;
}

void inOrder(struct Node* root){
   if (root == NULL)
   {
       return;
   }
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void preOrder(struct Node* root){
   if (root == NULL)
   {
       return;
   }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct Node* root){
   if (root == NULL)
   {
       return;
   }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int main()
{
    postOrder(createTree());
    inOrder(createTree());
    preOrder(createTree());
    return 0;
}



