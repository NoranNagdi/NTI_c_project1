/*
 * calc.c
 *
 *  Created on: Oct 18, 2023
 *      Author: DELL
 */

#include <stdio.h>
#include <math.h>

float num1,num2;

void calc_menu()
{
	puts("please choose an operation");
	puts("1.add");
	puts("2.subtract");
	puts("3.Multiply");
	puts("4.Division");
	puts("5.Square");
	puts("6.Back");
}
void add()
{
	puts("please enter 2 numbers");
	scanf("%f %f",&num1,&num2);
	printf("The Result is %f\n",num1+num2);
}
void sub()
{
	puts("please enter 2 numbers");
	scanf("%f %f",&num1,&num2);
	printf("The Result is %f\n",num1-num2);
}
void mul()
{
	puts("please enter 2 numbers");
	scanf("%f %f",&num1,&num2);
	printf("The Result is %f\n",num1*num2);
}
void divide()
{
	puts("please enter 2 numbers");
	scanf("%f %f",&num1,&num2);
	if(num2==0)
	{
		puts("ERROR! Division by zero");
	}
	else
	{
		printf("The Result is %f\n",num1/num2);
	}
}
void square()
{
	puts("please enter the number you want");
	scanf("%f",&num1);
	printf("The Result is %lf\n",pow(num1,2));
}

void calculator()
{
	int calc_option;
	while(1)
	{
		calc_menu();
		scanf("%d",&calc_option);
		if(calc_option == 1)
			add();
		else if(calc_option == 2)
			sub();
		else if(calc_option == 3)
			mul();
		else if(calc_option == 4)
			divide();
		else if(calc_option == 5)
			square();
		else if(calc_option == 6)
			break;
		else
		{
			puts("Invalid operation");
			break;
		}
	}
}

