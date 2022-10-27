#include <stdio.h>
#include <stdlib.h>

struct Tree
{
    int data;
    struct Tree *left, *right;
};
struct Tree *Create()
{
    int x;
    struct Tree *newNode;
    newNode = (struct Tree *)malloc(sizeof(struct Tree));
    printf("\n");
    printf("\nEnter the Data (-1 for no node) : ");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    newNode->data = x;
    printf("\n");
    printf("\nEnter the Left Child of %d\n ", x);
    newNode->left = Create();
    printf("\n");
    printf("\nEnter the  Right Child of %d\n ", x);
    newNode->right = Create();
    return newNode;
}
void preorder(struct Tree *temp)
{
    if (temp == 0)

    {
        return;
    }
    printf("\n");
    printf("%3d", temp->data);
    preorder(temp->left);
    preorder(temp->right);
}
void Inorder(struct Tree *temp)
{
    if (temp == 0)

    {
        return;
    }
    Inorder(temp->left);
    printf("\n");
    printf("%3d", temp->data);
    Inorder(temp->right);
}
void Postorder(struct Tree *temp)
{
    if (temp == 0)

    {
        return;
    }
    Postorder(temp->left);
    Postorder(temp->right);
    printf("\n");
    printf("%3d", temp->data);
}
int main()
{
    // int ch;
    struct Tree *root;
    // printf("\n1.Tree Creation \n");
    // printf("\n2.preorder");

    root = Create();
    printf("\n");
    printf("preorder:\n");
    preorder(root);
    printf("\n");
    printf("Inorder:\n");
    Inorder(root);
    printf("\n");
    printf("Postorder:\n");
    Postorder(root);
}
