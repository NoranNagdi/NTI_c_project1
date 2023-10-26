/*
 * database.c
 *
 *  Created on: Oct 18, 2023
 *      Author: DELL
 */

#include <stdio.h>


struct employee{
	char name[20];
	char address[20];
	int id;
	float salary;
};

struct employee emp[5];

void menu()
{
	puts("please choose an option");
	puts("1.Enter Employees Data");
	puts("2.Display Employees Data");
	puts("3.Find largest salary Employee");
	puts("4.Search Employees by ID");
	puts("5.Exit");
}


void scaninfo(struct employee* ptr)
{
	puts("please enter employees info");
	for(int i=0; i<5; i++)
	{
		fflush(stdin);
		gets(ptr[i].name);
		fflush(stdin);
		gets(ptr[i].address);
		fflush(stdin);
		scanf("%d",&ptr[i].id);
		fflush(stdin);
		scanf("%f",&ptr[i].salary);

	}
}
void printinfo(struct employee* ptr)
{
	for(int i=0; i<5; i++)
	{
		printf("Employee %d Info:\n",i+1);
		printf("Name:");
		puts(ptr[i].name);
		printf("Address:");
		puts(ptr[i].address);
		printf("ID:%d\n",ptr[i].id);
		printf("Salary:%f\n",ptr[i].salary);
		puts("-----------------------------------");
	}
}
void laregest_salary(struct employee* ptr)
{
	float max = ptr[0].salary;
	int index = 0;
	for(int i=0; i<5; i++)
	{
		if(ptr[i].salary > max)
		{
			max = ptr[i].salary;
			index = i;
		}
	}
	printf("The largest salary is: %f for employee:%s with address:%s and ID:%d\n",
			max,ptr[index].name,ptr[index].address,ptr[index].id);
}

void search_by_ID(struct employee* ptr)
{
	puts("please enter the ID you want to search by");
	int ID;
	scanf("%d",&ID);
	for(int i=0; i<5; i++)
	{
		if(ptr[i].id == ID)
		{
			printf("The ID %d is for employee:%s with address:%s and Salary:%f\n",
					ID,ptr[i].name,ptr[i].address,ptr[i].salary);
			return;
		}
	}
	puts("ID not Found");
}

