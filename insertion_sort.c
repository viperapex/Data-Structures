#include<stdio.h>

int main()
{
    int a[20],k,j,n,i,temp;
    printf("Enter the length of your array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=0;
    for(k=2;k<=n;k++)
    {
        temp=a[k];
        j=k-1;
        while(temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(i=1;i<=n;i++)
    {
        printf(" %d",
               a[i]);
    }
    return 0;
}
