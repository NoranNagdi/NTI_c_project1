/*
 * array.c
 *
 *  Created on: Oct 18, 2023
 *      Author: DELL
 */
#include <stdio.h>

int array[5]={0};

void array_menu()
{
	puts("please choose an option");
	puts("1.Enter array");
	puts("2.Display array");
	puts("3.Sort array");
	puts("4.Find max element in array");
	puts("5.Find min element in array");
	puts("6.Back");
}

void swap(int* a,int* b)
{
	int temp = *a;
	*a=*b;
	*b = temp;
}

void enterarray(int* arr)
{
	puts("please enter array of 5 elements");
	for(int i=0; i<5; i++)
	{
		scanf("%d",(arr+i));
	}
}

void printarray(int* arr)
{
	puts("The array is:");
	for(int i=0; i<5; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void sort(int* arr)
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void max(int* arr)
{
	int max = arr[0];
	for(int i=1; i<5; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("The max number in array is %d \n",max);
}

void min(int* arr)
{
	int min = arr[0];
	for(int i=1; i<5; i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("The min number in array is %d \n",min);
}


void playwitharray()
{
	int array_option;
	while(1)
	{
		array_menu();
		scanf("%d",&array_option);
		if(array_option == 1)
			enterarray(array);
		else if(array_option == 2)
			printarray(array);
		else if(array_option == 3)
			sort(array);
		else if(array_option == 4)
			max(array);
		else if(array_option == 5)
			min(array);
		else if(array_option == 6)
			break;
		else
		{
			puts("Invalid Option");
			break;
		}
	}
}
