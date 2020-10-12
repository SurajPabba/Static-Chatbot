//Game.c
void method();
int i,ch,j,a;
void guess();
void guess()
{
	printf("\n You Have Chosen To Play Guess The Number Which The System Chooses");
	printf("\n1.Between 1-10\n2.Between 1-20\n3.Between 1-50\n4.Exit\nEnter Your Choice");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			a=rand()%10;
			method();
			break;
			case 2:
			a=rand()%20;
			method();
			break;
			case 3:
			a=rand()%50;
			method();
			break;
			default:printf("\n Exit");
		}
	}
void method()
	{
		int count,ans[100];
		if(ch==1)
		count=10,i=10;
		else if(ch==2)
		count=20,i=20;
		else if(ch==3)
		count=50,i=50;
		printf("\nGuess any Number Between1 and %d\n",i);
		for(j=0;j<i;j++)
		{
			scanf("%d",&ans[j]);
			if(ans[j]==a)
			{
				printf("\n Your Guess is Right\nYour Score is %d",count);
				break;
			}
			else if(ans[j]>a)
			printf("\nGuess Number Less than %d\n",ans[j]);
			else
			printf("\nGuess Number Greater than %d\n",ans[j]);
			count--;
		}
		if(count==0)
			printf("\n You Didn't Guess The Correct Number\nCorrect Number is %d\n Score is %d",a,count);
	}
