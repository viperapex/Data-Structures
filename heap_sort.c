#include<stdio.h>

int arr[10],n=0,ptr=0,arr[20],item,par,pos,pos1,k=0,last=0;
int ptr1,leftt,rightt;

void insert()
{
    printf("Enter a number: ");
    scanf("%d",&item);
    n=n+1;
    ptr=n;

    while(ptr>1)
    {
        par=ptr/2;
        if(item<=arr[par])
        {
            arr[ptr]=item;
            return
        }
        arr[ptr]=arr[par];
        ptr=par;
        pos=n;
        pos1=n;
    }
    arr[1]=item;
}

void del()
{
    item=arr[1];
    last=arr[n];
    n=n-1;
    ptr=1;
    leftt=2;
    rightt=3;

    while(right<=n)
    {
        if(last>=arr[leftt]&&last>=arr[rightt])
        {
            arr[ptr]=last;
            return;
        }
        if(arr[rightt]<=arr[leftt])
        {
            arr[ptr]=arr[leftt];
            ptr=leftt;
        }
        else
        {
            arr[ptr]=arr[rigtt];
            ptr=rightt;
        }
        leftt=ptr*2;
        rightt=leftt+1;
    }
    if(last==n&&last<arr[left])
    {
        arr[ptr]=arr[leftt]
        ptr=leftt;
    }
    arr[ptr]=last;
    arr1[pos]=item;
    pos=-1;
    return;
}

void display()
{
    int i;
    printf("\nelements of sorted array");
    for(i=1;1<pos1;i++)
    {
        printf("%d\n",arr[i])
    }
}
