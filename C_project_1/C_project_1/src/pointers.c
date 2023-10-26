/*
 * pointers.c
 *
 *  Created on: Oct 18, 2023
 *      Author: DELL
 */
#include <stdio.h>

void* ptr = NULL;


void pointers_menu()
{
	puts("please choose an option");
	puts("1.Integer");
	puts("2.Character");
	puts("3.Float");
	puts("4.Back");
}
void vptrInt()
{
	int intvalue;
	puts("please enter integer value");
	scanf("%d",&intvalue);
	ptr = &intvalue;
	printf("The address of pointer is: %p and carrying value: %d\n",ptr,(*(int*)ptr));
}
void vptrch()
{
	char charvalue;
	puts("please enter char value");
	fflush(stdin);
	scanf("%c",&charvalue);
	fflush(stdin);
	ptr = &charvalue;
	printf("The address of pointer is: %p and carrying value: %c\n",ptr,(*(char*)ptr));
}
void vptrfloat()
{
	float floatvalue;
	puts("please enter float value");
	scanf("%f",&floatvalue);
	ptr = &floatvalue;
	printf("The address of pointer is: %p and carrying value: %f\n",ptr,(*(float*)ptr));
}

void playwithpointers()
{
	int pointers_option;
	while(1)
	{
		pointers_menu();
		scanf("%d",&pointers_option);
		if(pointers_option == 1)
			vptrInt();
		else if(pointers_option == 2)
			vptrch();
		else if(pointers_option == 3)
			vptrfloat();
		else if(pointers_option == 4)
			break;
		else
		{
			puts("Invalid Option");
			break;
		}
	}
}
