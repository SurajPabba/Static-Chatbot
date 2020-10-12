#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "guess.h"
#include "mulc.h"
#include "cric.h"
#include "bsb.h"
#include "mulb.h"
#include "mulr.h"
#include "rps.h"
#include "mguess.h"
void games()
{
	int n;
	do
	{
	printf("\n1.Guess The Number\n2.Cricket\n3.Multiplayer Cricket\n4.BaseBall\n5.Multiplayer Baseball\n6.Rock Paper Scissor\n7.Multiplayer Rock Paper Scissor\n8.MultiPlayer Guess The Number");
	printf("\n Enter Your Choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1://clrscr();
		system("cls");
		guess();
		break;
		case 2://clrscr();
		system("cls");
		cric();
		break;
		case 3://clrscr();
		system("cls");
		mulc();
		break;
		case 4://clrscr();
	    system("cls");
		bsb();
		break;
		case 5://clrscr();
		system("cls");
		mulb();
		break;
		case 6://clrscr();
		system("cls");
		rps();
		break;
		case 7://clrscr();
		system("cls");
		mulr();
		break;
		case 8://clrscr();
		system("cls");
		mguess();
		break;
		default:
		printf("\n Sorry!We Have Designed Only 8 Games");
	}
	}while(n<=8);
}
void clrscr()
{
	system("@cls||clear");
}
int getInput(char  input[500])
{
	char  array[500],c;
	FILE *fp=fopen("data.txt", "r+");
	if(!fp)
	{
		printf("ERROR: No Directory To Read Answers");
	}
	else if(strcmp(input,"remember")==0)
	{
		FILE *fp1=fopen("remember.txt","w");
		int n1;char rem[200];
		printf("how many things\n");
		scanf("%d",&n1);
		for(int i=0;i<n1;i++)
		{
			scanf("%s",&rem);
			fputs("\n",fp1);
			fputs(rem,fp1);
		}
		fclose(fp1);
	}
	else
	{
		if(strcmp(input,"games")==0)
		{
			games();
		}
		if(strcmp(input,"did_i_say_u_to_remember_anything")==0)
		{
			fp=fopen("remember.txt","r+");
			c = fgetc(fp); 
			for(c='\n';c!=EOF;) 
			{ 
				printf ("%c", c); 
				c = fgetc(fp); 
			}
			exit(0);
			fclose(fp); 
		}
	while(!feof(fp))
	{
		fgets(array,128,fp);
		if(strncmp(array,input,strlen(input))==0)
		{
			fgets(array,128,fp);
			printf("BOT>>%s",array);
		}
	}
}
return 0;
}
int main()
{
	char input[500],prev[500],name[200];
	printf("Hello, Welcome\nThis is chatbot v1.0\n");
	printf("Enter your name please:");
	scanf("%s",&name);
	do
	{
		printf("%s>>",name);
		scanf("%s",&input);
		getInput(input);
	}
	while(1);	
	return 0;
}