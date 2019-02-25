#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;

}*p=NULL;

void addatbeg(int num)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        temp->next=p;
        p=temp;
    }
}
void addatend(int num)
{
    struct node *temp,*r;
    r=p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        while(r->next!=NULL)
        {
            r=r->next;
        }
        r->next=temp;
        temp->next=NULL;
    }
}
int search(int item)
{
    struct node *r;
    r=p;
    while(r!=NULL)
    {
        if(r->data==item)
        {
          return r;
        }
        r=r->next;
    }
    return NULL;
}
void addafter(int num,int num1)
{
    struct node *temp,*loc;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    loc=search(num1);
    if(loc==NULL)
    {
        printf("\n element cannot be inserted");
    }
    else if(loc->next==NULL)
    {
        loc->next=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=loc->next;
        loc->next=temp;
    }
}
void delatbeg()
{
    struct node *r;
    r=p;
    if(p==NULL)
    {
        printf("\n linked list is empty");
    }
    else
    {
        p=r->next;
        free(r);
    }
}
void delatend()
{
    struct node *r1,*r2;
    if(p==NULL)
    {
        printf("\n deletion not possible");
    }
    else
    {
    r1=p;
    r2=p->next;
    if(r1->next==NULL)
    {
        p=NULL;
        free(r1);
    }
    else
    {
        while(r2->next!=NULL)
        {
            r1=r2;
            r2=r2->next;
        }
        r1->next=NULL;
        free(r2);
    }
    }
}
void delafter(int num)
{
    if(p==NULL)
    {
        printf("\n deletion not possible");
    }
    else
    {
        struct node *r1,*loc;
        r1=p;
        loc=search(num);
        if(loc==NULL)
        {
            printf("\n deletion not possible");
        }
        else if(loc->next==NULL)
        {
            printf("\n deletion not possible");
        }
        else
        {
            r1=loc->next;
            loc->next=r1->next;
            free(r1);
        }
    }
}
void Display()
{
    struct node *r;
    r=p;
    if(p==NULL)
    {
        printf("\n linked list is empty");
    }
    while(r!=NULL)
    {
        printf("\n%d",r->data);
        r=r->next;
    }
}

int main()
{

    int choice,num,num1;
    while(1)
    {

         printf("\n1. Insertion at begining");
         printf("\n2. Insertion at end");
         printf("\n3. Insertion at after given node");
         printf("\n4. deletion at begining");
         printf("\n5. deletion at end");
         printf("\n6. deletion at after given node");
         printf("\n7. display");
         printf("\n enter your choice: ");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1:printf("\nenter your num: ");
                    scanf("%d",&num);
                    addatbeg(num);
                    break;
             case 2: printf("\nenter your num: ");
                    scanf("%d",&num);
                    addatend(num);
                    break;
             case 3:printf("\n enter the num you want to insert: ");
                    scanf("%d",&num);
                    printf("\n enter the num after which you want to insert: ");
                    scanf("%d",&num1);
                    addafter(num,num1);
                    break;
             case 4:delatbeg();
                    break;
             case 5:delatend();
                    break;
             case 6:printf("\n enter the num you want to delete: ");
                    scanf("%d",&num);
                    delafter(num);
                    break;
             case 7: Display();
                     break;
         }
    }
}

