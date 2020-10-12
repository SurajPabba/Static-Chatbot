//Game.c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
void play();
int i,ch,j,k,a;
char c[2];
void mguess();
void mguess()
{
	printf("**** Dont Press Amy Key After Entering The Guessed Number****");
	printf("\n1.Between 1-10\n2.Between 1-20\n3.Between 1-50\n4.Exit\nEnter Your Choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		play();
		break;
		case 2:
		play();
		break;
		case 3:
		play();
		break;
		default:
		printf("\n Invalid Choice");
		break;
	}
}
void play()
{
	int r[50],n,count,target;
	if(ch==1)
	n=10;
	else if(ch==2)
	n=20;
	else
	n=50;
	for(j=1;j<=2;j++)
	
	{
		count=n;
		if(j==1)
			printf("\n1st Player Has to Enter A Number i.e to be guessed\n2nd Player Has to guess the number\n Let 1st Player enter the number to be guessed:");
		else
			printf("\n2nd Player Has to Enter A Number i.e to be guessed\n1st Player Has to guess the number with in %d chances\n Let 2nd Player Enter The Number To be guessed:",n-target+2);
		for(i=0;i<2;i++)
		{
			c[i]=getch();
			printf("*");
			if(ch==13)
			break;
		}
		a=atoi(c);
		printf("\n Let Another player Guess number between 1 and \n %d: ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&r[i]);
			if(a==r[i])
			{
				printf("\n You Have Guessed the Correct Number i.e is %d and Your Score %d",r[i],count);
				break;
			}
			else if(a>=r[i])
			{
				printf("\n Wrong Guess!! Enter a Number Greater Than %d",r[i]);
				count--;
			}
			else 
			{
				printf("\nWrong Guess!! Enter a Number Less than %d",r[i]);
				count--;
			}
		}
		if(j==1)
		{
			if(count==0)
			printf("\n You Did Not Guess The correct Number i.e %d",a);
			target=count+1;
			printf("\n Target to be Chased is %d",target);
		}
		if(j==2)
		{
			if(count==0)
			printf("\n You Did Not Guess The correct Number i.e %d",a);
			if(target<=count)
			printf("\n 2nd Player Wins\nChased target %d",count);
			else if((target-1==count))
			{
				printf("\n Draw");
			}
			else
			printf("\n 1st Player Wins\n2nd Player didn't Chase the target %d and Scored Only %d",target,count);
		}
	}
}
