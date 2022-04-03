#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MainElectricBills.h"
#include "ElectricityBill.h"
void city();
void village();
void main()
{ 
	details();
	int option;
	do
	{
		printf("Electric Bills\n");
		printf("Please enter your choice from below (1-2):\n");
		printf("1. city\n");
		printf("2. village\n");
		printf("3. EXIT\n");
		printf("Electric Board Helpline: 223344233\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			city();
			break;
		case 2:
			village();
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		getch();
	} while (option != 3);
}