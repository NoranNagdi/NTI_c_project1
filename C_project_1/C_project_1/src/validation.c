/*
 * validation.c
 *
 *  Created on: Oct 18, 2023
 *      Author: DELL
 */
#define SUCCESS 1
#define ERROR   0

int validatePassword()
{
	char name[20];
	char pass[20];
	int i=0;
	while(i!=3)
	{
		printf("please enter name and password\n");
		gets(name);
		gets(pass);
		if(!(strcmp(name,"nora")&& strcmp(pass,"1111")))
		{
			return SUCCESS;
		}
		i++;
		if(i==3)
		{
			printf("ERROR!!!!! Terminating Program");
			return ERROR;
		}
	}
	return ERROR;
}


void displayMainMenu()
{
	puts("please choose an option");
	puts("1.Calculator");
	puts("2.Play with array");
	puts("3.Play with pointer");
	puts("4.Exit");
}


