#include<stdio.h>r
int numminutes=90;
{
if((numminutes/60)==1)
printf("%d hours",numminutes/60);
else
printf("%d min ",numminutes/60);
if((numminutes%60)==1)
printf("%d hours",numminutes%60);
else
printf("%d min",numminutes%60);
return(0);
}