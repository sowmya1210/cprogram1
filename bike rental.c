#include<time.h>
#include<stdio.h>\
#include<string.h>
void rent();
void login();
void view_rentalrecord();
void remove_rentalrecord();
void search_rentalrecord();
void edit_record();
struct details{
	int bikeno,time;
	char name[20];
	char contact[30];
	char mail[44];
	char nationality;
	char add[33];
	
}s;
void main()

{
	printf("==========================================================\n");
    printf("|                                                        |\n");
    printf("|                                                        |\n");
    printf("|    -----------------------------------------------     |\n");
    printf("|            WELCOME TO BIKE RENTAL SYSTEM               |\n");
    printf("|                                                        |\n");
    printf("|    -----------------------------------------------     |\n");
    printf("|                                                        |\n");
	printf("==========================================================\n");
	printf("Press any key to continue");
	getch();
	time_t date;
	date=time(NULL);
	printf(ctime(&date));
	printf("press any key to continue");
	getch();
	void login()
	{
		char name[30],pass[40],c=' ';
		int i;
		char n[49]="nikitha";
		char p[44]="eertyu";
		printf("enter name");
		scanf("%s",name);
		printf(" enter pasword");
		while(i<9)
		{
		pass[i]=getch();
		c=pass[i];
		if(c==13)
		break;
		else
		printf("*");	
			
		}
		}
	

	printf("=============================================\n");
	printf("  enter 1 ->> rent a bike\n");
	printf("=============================================\n");
	printf("  enter 2 ->> view rental record\n");
	printf("=============================================\n");
	printf("  enter 3 ->> remove rental record\n");
	printf("=============================================\n");
	printf("  enter 4 ->> search rental record\n");
	printf("=============================================\n");
	printf("  enter 5 ->> edit record\n");
	printf("=============================================\n");
	printf("  enter  6 ->> exit\n");
	printf("=============================================\n");
	
	
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
   	printf("current date and time :wed feb 28 16:02:38 2018\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("enter customer details");
}