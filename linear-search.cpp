#include<iostream>
using namespace std;

int main(){
    int arr[10],n=0,i,x,flag=0;
    cout<<"Enter the no of elements in array: ";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"\nEnter the elements in array: ";
        cin>>arr[i];
    }
    cout<<"\nEnter the element to search: ";
    cin>>x;
    for(i=0;i<=n;i++)
    {
        if(arr[i]==x)
            {
            flag=1;
            break;
            }
    }
        if(flag)
        {
            cout<<"\nElement found at :"<<i;
        }
        else
        {
            cout<<"\nElement not found ";
        }

}
