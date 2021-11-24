#ifndef __BILLING_OPERATIONS_H_INCLUDED
#define __BILLING_OPERATIONS_H_INCLUDED

typedef struct Meals
{

	float Data;
	char Item_name[30];
	int quant;
	float Amount;
    struct Meals *next;

}Meals;
typedef struct top
{
    Meals *start;
}top;
# include <unistd.h>
#include<stdlib.h>
#define sleep(x) Sleep(1000 * (x))

#endif



#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

int Add_Item(top *t, float Data, char Item_name[25], int quant, float Amount);
int Item_List(top *t);
int Previous_Order(top *t);
float Total_Bill(top *t);
int Order_Item(top *t, top *l, float fc, int qty);
int Clear_Screen();

#endif // HEADER_H_INCLUDED

