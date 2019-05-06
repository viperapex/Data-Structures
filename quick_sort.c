#include<stdio.h>

#include<conio.h>

void quicksort(int arr[], int lb, int ub);

void main()

{

	int arr[20], n, i;

	clrscr();

	printf("\n\t\t\t------Quick Sort------\n\n");

	printf("Enter the size of the array:");

	scanf("%d",&n);

	printf("Enter the elements to be sorted:\n");

	for(i=0;i < n;i++)

	scanf("%d",&arr[i]);

	quicksort(arr, 0, n-1);

	printf("\n\t\t\t-----Quick Sorted Elements-----\n\n");

	printf("Sorted array:");

	for(i = 0; i < n; i++)

	printf("\t%d ",arr[i]);

	getch();

}

void quicksort(int arr[], int lb, int ub)

{

	int pivot, i, j, temp;

	if(lb < ub)

	{

		pivot = lb;

		i = lb;

		j = ub;

		while(i < j)

		{

			while(arr[i] <= arr[pivot] &&  i <= ub)

			i++;

			while(arr[j] > arr[pivot] && j >= lb)

			j--;

			if(i < j)

			{

				temp = arr[i];

				arr[i] = arr[j];

				arr[j] = temp;

			}

		}

		temp = arr[j];

		arr[j] = arr[pivot];

		arr[pivot] = temp;

		quicksort(arr, lb, j-1);

		quicksort(arr, j+1, ub);

	}

}

