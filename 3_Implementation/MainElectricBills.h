#ifndef __MainElectricBills_H__
#define __MainElectricBills_H__

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct ElectricBills
{
	char area[10];
	char name[15];
	int meternumber;
    int unitsconsumed;
	char email[15];
	char address[100];
	int phonenumber[10];
};

struct ElectricBills X;
#endif