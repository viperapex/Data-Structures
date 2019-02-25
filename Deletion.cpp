#include<iostream>
using namespace std;

int main(){
    int arr[20],num,i,item,j,count=0;

    cout<<"Enter size of array: ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"Enter the elements of array: "<<i+1<<"\n";
        cin>>arr[i];
    }

    cout<<"Enter the element to delete: ";
    cin>>item;

    for(i=0; i<num; i++)
	{
		if(arr[i]==item)
		{
			for(int j=i;j<(num-1);j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found..!!";
	}
	else
	{
		cout<<"Element deleted successfully..!!\n";
		cout<<"Now the new array is :\n";
		for(i=0; i<(num-1); i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}
