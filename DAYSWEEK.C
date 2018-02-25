#include<stdio.h>
void main()
{
int ndays,year,weeks,days;
clrscr();
printf("enter the no of days");
scanf("%d",&ndays);
year=(ndays%100);
weeks=(ndays%365)/7;
days=(ndays%365)%7;
printf("%d is equivalent to %dyears,%dweeks,%d days",year,weeks,days);
}