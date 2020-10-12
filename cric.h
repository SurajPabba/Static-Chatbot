//HandCricket
void cric();
void cric()
{
	printf("You Have Chosed To Play Cricket With System\n");
	printf("InStructions:\n1.System Is Bowler And You Are Batsmen\n2.Press Enter Key After Entering Your Choice Every Time\nGet Ready To Start The Game\n");
	int bowler,batsmen,score=0,balls,i;
	printf("Enter Number of balls\n");
	scanf("%d",&balls);
	printf("Maximum Number of runs in a ball is 6,No Dot Ball\n");
	for(i=1;i<=balls;i++)
	{
		bowler=(rand()%6)+1;
		printf("Batsmen choice\n");
		scanf("%d",&batsmen);
		if(batsmen==bowler)
		{
			printf("Out\n");
			break;
		}
		else
			score+=batsmen;
		if(batsmen<4)
		printf("Good Running Between The Wickets\n");
		else if(batsmen==4)
		printf("One Bounce Over The Fence\n");
		else if(batsmen==6)
		printf("Magnificient Strike Into The Crowd\n");
		printf("Score Is %d\n",score);
	}
	printf("Batsmen Scored %d Runs",score);
}
