
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char str[10][20], t[20];
	int i, j;
	cout<<"Enter the string (name) : ";
	for(i=0; i<10; i++)
	{
		cin>>str[i];
	}
	for(i=1; i<10; i++)
	{
		for(j=1; j<10; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	cout<<"Strings (Names) in alphabetical order : \n";
	for(i=0; i<10; i++)
	{
		cout<<str[i]<<"\n";
	}
 return 0;
}
