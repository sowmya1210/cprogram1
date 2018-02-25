f#include<stdio.h>
void main()
{
struct date
{
int day;
int month;
 int year;
 };
 struct details
 {
 char name[20];
int price;
int code;
int qty;
struct date mfg;
};
struct details item[50];
int n,i;
clrscr();
printf("enter number of items");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("item name:");
scanf("%s",item[i].name);
printf("item code:");
scanf("%s",item[i].code);
printf("quantity");
scanf("%d",&item[i].qty);
printf("price:");
scanf("%d",&item[i].price);
printf("manufracturing date(dd-mm-yyyy:");
scanf("%d%d%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);

}

}