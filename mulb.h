// BaseBall
void mulb();
void mulb()
{
	printf("You Have Chosen To Play Baseball Multi Player");
	printf("Instructions:\n1.How To Play Game?\n2.Bowler Chooses A Number Between 1 To 6\n3.Batsmen Chooses A Number Between 1 To 6,Score Gets Incremented If There Are No Strikes\n4.Strikes:\nStrike1:If Batsmen Chooses A Number Which Succeding Or Preceeding to Bowler's Choice\nE.g:Let 3 Is Chosen By Bowler\nIt Is Strike1 if Batsmen Chooses Either 4 or 2\nStrike2:After Strike1	If Batsmen Chooses A Number i.e Succeeding 	Or Preceeding Or Equal to Bowler Choice It Is Strike2\nElse Strike Breaks And The Game Continues\nEg:If Bowler Chooses 3 Then It Is Strike2 If Batsmen Chooses 2(Preceeding) Or 3(Equal) Or 4(Succeding)\n If Not Strike Breaks And The Game Continues i.e If Batsmen Chooses Number Other Than 2 3 4\nStrike3:After Strike2 If Batsmen Chooses A Number i.e Succeeding Or Preceeding Or Equal to Bowler Choice It Is Strike3 If It Is Strike 3 Batsmen is Out\nElse Strike Breaks And The Game Continues\nEg:If Bowler Chooses 3 Then It Is Strike2 If Batsmen Chooses 2(Preceeding) Or 3(Equal) Or 4(Succeding) Then 	Batsmen is Out\nIf Not Strike Breaks And The Game Continues i.e If Batsmen Chooses Number Other Than 2 3 4\n\nNote:If The Strike Is 0 And If Batsmen Chooses Number As Same As Bowler Then Score Gets Incremneted By Double of The Choosen Number\nE.g:If Both Bowler And Batsmen Chooses 5(Say)\nThen Score Is Incrememted 2*5(10)\nGet Ready To Play The Game\n");
	printf("****While Entering Batsmen And Bowlers Choice Do Not Press Any Other Key****\n\n");
	int runs=0,balls,i,strike=0,k,target;
	char bowl,batsmen;
	printf("EnterNumber Of balls\n");
	scanf("%d",&balls);
	printf("Each ball has max of six\n");
	for(k=1;k<=2;k++)
	{
		if(k==1)
		printf("1st player is batsmen,2nd player is bowler\n");
		else if(k==2)
		printf("2nd Player is batsmen,1st player is bowler\n");
		runs=0;
		for(i=1;i<=balls;i++)
		{
			
			strike=0;
			printf("Bowlers choice\n");
			bowl=getch();
			printf("*");
			printf("\nBatsmen Choice\n");
			batsmen=getch();
			printf("*");
			if(bowl==batsmen)
			{
				runs+=2*(batsmen-48);
				if(k==2)
				{
					if(target<=runs)
					break;
				}
			}
			else if(batsmen==bowl+1||batsmen==bowl-1)
			{
				strike++;
				for(;strike<3;strike++)
				{
					i++;
					printf("\nStrike%d",strike);
					if(i>balls)
					{
						printf("\nNo.of Balls Completed i.e %d",balls);
						break;	
					}
					printf("\nBowlers choice");
					bowl=getch();
					printf("*");
					printf("\nBatsmen Choice");
					batsmen=getch();
					printf("*");
					if(batsmen==bowl ||batsmen==bowl-1|| batsmen==bowl+1)
					goto case1;
					else
					{
						runs+=batsmen-48;
						break;
					}
					case1:if(strike==2)
					{	
						printf("\nStrike%d",++strike);
						printf("\nOut");
						break;
					}
				}
				if(k==2)
				{
					if(target<=runs)
					break;
				}
			}
			else
			runs+=batsmen-48;
			if(k==2)
			{
				if(target<=runs)
				break;
			}
			printf("\nScore is %d\n",runs);
		}
		if(k==1)
		{
			target=runs;
			printf("\n Score is %d\nTarget is %d\n2nd player has to chase it",runs,++target);
		}
		else
		{
			if(target<=runs)
	printf("\n 2nd Player Chases The Target %d,Scored %d\nSo 2nd player wins",target,runs);
			else if(target-1==runs)
			printf("\n Draw");
			else
			printf("\n2nd player Didn't Chase the Target %dand scored only %d\nSo 1st Player Wins",target,runs);
		}
	}
}	
