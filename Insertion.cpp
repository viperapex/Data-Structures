#include<iostream>
using namespace std;


int main(){
int arr[20],num=0,i,item,loc;

cout<<"\nEnter the size of array: ";
cin>>num;
for(i=0;i<num;i++)
{
    cout<<"\nEnter the element "<<i+1<<"\n";
    cin>>arr[i];
}
cout<<"\nEnter the element to enter: ";
cin>>item;
cout<<"\nEnter the location to enter: ";
cin>>loc;
for(i=num;i>=loc;i--)
{
    arr[i+1]=arr[i];
}
arr[loc]=item;
for(i=0;i<=num;i++)
{
    cout<<arr[i];
}

}
