#include<iostream>
using namespace std;

int main() {

    int arr[20],num,i,j,temp;

    cout<<"\nEnter the size of array: ";
    cin>>num;

    for(i=0;i<num;i++){
        cout<<"\nEnter the elements of array at position "<<i+1<<": ";
        cin>>arr[i];
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\nSorted array: ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i];
    }
}
