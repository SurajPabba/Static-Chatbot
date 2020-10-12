//RoCk Paper Scissor
void mulr();
void mulr()
{
	printf("***Donot Press Any Key After Entering Choice****");
	int count1=0,count2=0,i;
	char a,r;
	printf("\n1.Rock\n2.Paper\n3.Scissor");
	for(i=0;i<=9;i++)
	{
		printf("\n Let 1st player enter Choice");
		a=getch();
		printf("*");
		printf("\n Let 2nd player enter choice");
		r=getch();
		printf("*");
		if(a==r)
			printf("\n Draw");
		else if((a=='1'&&r=='2')||(a=='2'&&r=='3')||(a=='3'&&r=='1')
)		{
			printf("\n 2nd Player Wins");
			count2++;
		}
		else if(a=='2'&&r=='1'||a=='3'&&r=='2'||(a=='1'&&r=='3'))
		{
			printf("\n 1st Player Wins");
			count1++;
		}	
	}
	printf("\n Score of \n	Player1=%d\n	Player2=%d",count1,count2);
	if(count2>count1)
		printf("\n 2nd player is the winner");
	else if(count1>count2)
		printf("\n 1st player is the winner");
	else
		printf("\n Tie");
}		
