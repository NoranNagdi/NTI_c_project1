/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	if(validatePassword())
	{
		while(1)
		{
			displayMainMenu();
			int option;
			scanf("%d",&option);

			if(option == 1)
			{
				calculator();
			}
			else if(option == 2)
			{
				playwitharray();
			}
			else if(option == 3)
			{
				playwithpointers();
			}
			else if(option == 4)
			{
				puts("Terminating program");
				exit(1);
			}
			else
			{
				puts("Invalid Option");
			}
		}

	}
	return 0;
}
