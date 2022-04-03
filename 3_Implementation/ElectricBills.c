#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"MainElectricBills.h"

void details()
{
    printf("Enter area:\n");
	scanf("%s", X.area);
	printf("Enter name:\n");
	scanf("%s", X.name);
	printf("Enter Meter Number:\n");
	scanf("%d", &X.meternumber);
    printf("Enter units consumed:\n");
	scanf("%d", &X.unitsconsumed);
    printf("Enter email ID :\n");
    scanf("%s", X.email);
    printf("Enter address :\n");
    scanf("%s", X.address);
    printf("Enter mobile number : \n");
    scanf("%s", X.phonenumber);
}
void city()
{
    int amount=0;
    X.unitsconsumed;
    if(X.unitsconsumed <=35 && X.unitsconsumed >= 0)
    {
        amount = X.unitsconsumed * 3.35;
    }
    else if(X.unitsconsumed >= 30 && X.unitsconsumed <= 100)
    {
        amount = X.unitsconsumed * 4.70;
    }
    else if(X.unitsconsumed >= 101 && X.unitsconsumed <= 200)
    {
        amount = X.unitsconsumed * 6.25;
    }
    else
    {
        amount = X.unitsconsumed * 7.30;
    }

    printf("Electric Bills\n");
    printf("Name : %s\n", X.name);
    printf("In city, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", X.unitsconsumed);
}

void village()
{
    int amount=0;
    B.unitsconsumed;
    if(X.unitsconsumed <=30 && X.unitsconsumed >= 0)
    {
        amount = X.unitsconsumed * 3.15; 
    }
    else if(X.unitsconsumed >= 31 && X.unitsconsumed <= 100)
    {
        amount = X.unitsconsumed * 4.40;
    }
    else if(X.unitsconsumed >= 101 && X.unitsconsumed <= 200)
    {
        amount = X.unitsconsumed * 5.95;
    }
    else
    {
        amount = X.unitsconsumed * 6.80;
    }
    printf("Electric Bills\n\n");
    printf("Name : %s\n", X.name);
    printf("In city, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", X.unitsconsumed);
}
