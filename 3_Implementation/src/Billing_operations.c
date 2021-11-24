#include<stdio.h>
#include<string.h>
#include "Billing_operations.h"


float Total_Bill(top *t)
{
    Meals *p;
    float a=0;
    p=t->start;
    while(p!=NULL)
    {
        a=a+p->Amount;
        p=p->next;
    }
    return a;
}


int Item_List(top *t)
{

// 	printf("\n\t"); //console_color(240);
// 	printf("_______________________________________________________");//console_color(26);
// 	printf("\n\t");// console_color(240);
// 	printf("  Food Code          Name                Price         ");//console_color(26);
// 	printf("\n\t"); //console_color(240);
// 	printf("-------------------------------------------------------");//console_color(26);

	Meals *p;
    p=t->start;
    while(p!= NULL)
    {
//         printf("\n\t");
//         printf("  %0.2f   |  %-25s     |    %0.2f   ",p->Data,p->Item_name,p->Amount);
// 		//console_color(26);
// 		printf("\n\t");
//         printf("-------------------------------------------------------");
        p=p->next;
    }
    return 0;
}



int Add_Item(top *t, float Data, char Item_name[25], int quant, float Amount)
{
    Meals *p, *q;
    p=(Meals *)malloc(sizeof(Meals));
    p->Data=Data;
    p->quant=quant;
    p->Amount=Amount;
    strcpy(p->Item_name, Item_name);
    p->next=NULL;
    if(t->start==NULL)
    {
        t->start=p;
    }
    else
    {
        q=t->start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
    return 0;
}


int Order_Item(top *t, top *l, float fc, int qty)
{
    Meals *p;
    p=t->start;
    while(p->Data!=fc)
    {
        p=p->next;
    }
    Add_Item(l, fc, p->Item_name, qty, (p->Amount*qty));
    return 0;
}


int Previous_Order(top *t)
{
// 	printf("\n\t"); //console_color(240);
// 	printf("___________________________________________________________________");//console_color(26);
// 	printf("\n\t"); //console_color(240);
// 	printf("  Food Code       Name                       Quantity      Price   ");//console_color(26);
// 	printf("\n\t");// console_color(240);
// 	printf("-------------------------------------------------------------------");//console_color(26);

	Meals *p;
    p=t->start;
    while(p!= NULL)
    {
// 		printf("\n\t");
//         printf("  %0.2f   |  %-25s      |    %2d      |  %0.2f   ",p->Data,p->Item_name, p->quant, p->Amount);
// 		printf("\n\t");
// 		printf("------------------------------------------------------------------");
        p=p->next;
    }
    return 0;
}

int Clear_Screen()
{
    system("cls");
    return 0;
}