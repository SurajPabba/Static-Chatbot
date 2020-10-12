//HandCricket
void mulc();
void mulc()
{
	printf("\n You Have Choosed To Play Cricket Multiplayer\n");
	printf("Instructions:\n1.If Bowler And Batsmen Choose Same Number It Is Out\n");
	printf("****Dont Enter Any Key After Entering Batsmen or Bowler's Choice****");
	int score=0,balls,i,j,target;
	char bowler,batsmen;
	printf("\nenter Number of balls");
	scanf("%d",&balls);
	printf("\n Maximum Number of runs in a ball is 6,No Dot Ball");
	for(j=1;j<=2;j++)
	{
		if(j==1)
		printf("\n1st Player Is Batsmen&&2nd is Bowler");
		else
		printf("\n2nd Player Is Batsmen&&1st is Bowler");
		score=0;
		for(i=1;i<=balls;i++)
		{
			if(j==2)
			{
				if(score>target)
				break;
			}
			printf("\n Bowlers choice\n");
			bowler=getch();
			printf("*");
			printf("\n Batsmen choice");
			batsmen=getch();
			printf("*");
			if(batsmen==bowler)
			{
				printf("\n Out");
				break;
			}
			else if(batsmen=='1'||batsmen=='2'||batsmen=='3')
			printf("Good Running Between The Wickets\n");
			else if(batsmen=='4')
			printf("One Bounce over The Fence");
			else if(batsmen=='6')
			printf("Magnificient Strike Into The Crowd");
			else
				score+=batsmen-48;
		}
			if(j==1)
			{
			target=score;
			printf("\nScore is %d,Target is %d and 2nd lPlayer Has To Chase It",score,++target);
			}
			if(j==2)
			{
				if(target<=score)
				printf("\n2nd player wins\nTarget =%d\nScore=%d",target,score);
				else if(target>score)
				printf("\n1st player wins\nTarget =%d\nScore=%d",target,score);
				else
				printf("\n Draw");
			}			
	}
}
