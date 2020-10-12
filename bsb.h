// BaseBall
void bsb();
void bsb()
{
	printf("You Have Chosen To Play Baseball With System\n");
	printf("Instructions:\n1.How To Play Game?\n2.Bowler Chooses A Number Between 1 To 6\n3.Batsmen Chooses A Number Between 1 To 6,Score Gets Incremented If There Are No Strikes\n4.Strikes:\nStrike1:If Batsmen Chooses A Number Which Succeding Or Preceeding to Bowler's Choice\nE.g:Let 3 Is Chosen By Bowler\nIt Is Strike1 if Batsmen Chooses Either 4 or 2\nStrike2:After Strike1	If Batsmen Chooses A Number i.e Succeeding 	Or Preceeding Or Equal to Bowler Choice It Is Strike2\nElse Strike Breaks And The Game Continues\nEg:If Bowler Chooses 3 Then It Is Strike2 If Batsmen Chooses 2(Preceeding) Or 3(Equal) Or 4(Succeding)\n If Not Strike Breaks And The Game Continues i.e If Batsmen Chooses Number Other Than 2 3 4\nStrike3:After Strike2 If Batsmen Chooses A Number i.e Succeeding Or Preceeding Or Equal to Bowler Choice It Is Strike3 If It Is Strike 3 Batsmen is Out\nElse Strike Breaks And The Game Continues\nEg:If Bowler Chooses 3 Then It Is Strike2 If Batsmen Chooses 2(Preceeding) Or 3(Equal) Or 4(Succeding) Then 	Batsmen is Out\nIf Not Strike Breaks And The Game Continues i.e If Batsmen Chooses Number Other Than 2 3 4\n\nNote:If The Strike Is 0 And If Batsmen Chooses Number As Same As Bowler Then Score Gets Incremneted By Double of The Choosen Number\nE.g:If Both Bowler And Batsmen Chooses 5(Say)\nThen Score Is Incrememted 2*5(10)\nIn This Game Bowler Is System And You Are Batsmen\nPress Enter Key After Entering Batsmen Choice\nGet Ready To Start The Game");	
	int bowl,batsmen,runs=0,balls,i,strike=0;
	printf("\n EnterNumber Of balls");
	scanf("%d",&balls);
	printf("\n Each ball has max of six");
	for(i=1;i<=balls;i++)
	{
		strike=0;
		bowl=(rand()%6)+1;
		printf("\n Enter Batsmen Choice");
		scanf("%d",&batsmen);
		if(bowl==batsmen)
			runs+=2*batsmen;
		else if(batsmen==bowl+1||batsmen==bowl-1)
		{
			strike++;
			for(;strike<3;strike++)
			{
				i++;
				printf("strike%d",strike);
				if(i>balls)
				{
					printf("\n No.of Balls Completed i.e %d",balls);
					break;
				}
				bowl=rand()%6+1;
				printf("\n Enter Batsmen Choice");
				scanf("%d",&batsmen);
				if(batsmen==bowl ||batsmen==bowl-1 || batsmen==bowl+1)
				goto case1;
				else
				{
					runs+=batsmen;
					break;
				}
				case1:if(strike==2)
				{
					printf("\n out");
					break;
				}
			}
		}
		else
		runs+=batsmen;
	}
	printf("\n Runs =%d\n",runs);
}	
