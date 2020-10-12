//RoCk Paper Scissor
void rps();
void rps()
{
	printf("\nYou Have Choosen Rock Paper Scissor to Play");
	int a,r,counts=0,countU=0,i;
	printf("\n0.Rock\n1.Paper\n2.Scissor");
	printf("\n You Can Play 10 Times");
	for(i=0;i<=9;i++)
	{
		a=rand()%3;
		printf("\n Enter your Choice");
		scanf("%d",&r);
		if(a==r)
			printf("\n Draw");
		else if((a==0&&r==1)||(a==1&&r==2)||(a==2&&r==0)
)		{
			printf("\n Player Wins");
			countU++;
		}
		else if(a==1&&r==0||a==2&&r==1||(a==0&&r==2))
		{
			printf("\n System Wins");
			counts++;
		}
	}
	printf("\n Score of \n	System=%d\n	Player=%d",counts,countU);
	if(countU>counts)
		printf("\n Hurrah!You are The Winner");
	else if(counts>countU)
		printf("\n Better Luck Next Time");
	else
		printf("\n Tie");
}		
