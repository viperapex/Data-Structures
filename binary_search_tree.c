#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

*root=NULL;
*temp=NULL;

void search(struct node * root)
{
    if((temp->data>root->data)&&(root->right!=NULL))
    {
        search(root->right);
    }
    else if((temp->data<root->data)&&(root->left!=NULL))
    {
        search(root->left);
    }
    else if((temp->data<root->data)&&(root->left!=NULL))
    {
        root->left=temp;
    }
    else if((temp->data>root->data)&&(root->right==NULL))
    {
        root->right=temp;
    }
}

void create()
{
    int item;
    temp=(struct node *)mallloc(size of(struct node));
    printf("\nEnter the number: ");
    scanf("%d",&item);
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
}

void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node * root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        printf("%d",root->data);
        preorder(root->right);
    }
}

void postorder(struct node * root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d",root->data);
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\nMenu");
        printf("\n1. Adding");
        printf("\n2. Preorder");
        printf("\n3. Inorder");
        printf("\n3. Postorder");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
                   break;
            case 2:preorder(root);
                   break;
            case 3:inorder(root);
                   break;
            case 4:postorder(root);
                   break;
            default:printf("Wrong choice");
        }
    }
}
