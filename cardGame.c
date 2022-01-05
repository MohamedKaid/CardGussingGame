/*
	mohamed kaid
	Guess the Card Game
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
char choiceInput(int points);
char suitInput();
int numInput();
char colorInput();
char faceInput();
int randomNumberCard (int ranNum);
void randomNumberSuit(int ranNum);
int suitPointSystem(char suit, int ranNum, int points, int play);
int numPointSystem(int ranNum, int num, int card, int points, int play);
int facePointSystem(char face, int ranNum, int points, int play);
int colorPointSystem(int ranNum, int points, int play, char color);
int points=20;
int main()
{
	int play, ranNum, x, num;
	char choice, suit, card, face, color;
while(1)
{
	if (points==0)
	{
		printf("GAME OVER YOU HAVE 0 POINTS");
		break;
	}
	choice=choiceInput(points);
	if(choice=='Q' || choice=='q')
	{
		printf("You have decided to quit the game\n\tThank you for playing");
			break;
	}
		
	switch (choice)
	{
		case 'A': case 'a':
		suit=suitInput();
			break;
		case 'B': case 'b':
		num=numInput();
			break;
		case 'C': case 'c':
		face=faceInput();
			break;
		case 'D': case 'd':
		color=colorInput();
			break;
		default:
			printf("wrong entry!\n");		
	}
	while(1)
	{
	printf("How many points would you like to use: ");
			scanf("%d", &play);
			getchar();
	if (play>=1 && play<=points)
		break;
	if (play<1)
		printf("invalid entry, you cant choose 0\n\n");
	else
		printf("invalid entry, you only have %d points\n\n", points);
	}
	
for(x=1; x<=1; x++)
	{
		srand(time(0));
		ranNum=(rand() % 55) + 1;
		 printf("\nyour random number is:%d \n", ranNum);
	}
	card=randomNumberCard (ranNum);
	randomNumberSuit(ranNum);
	
if (choice=='A' || choice=='a')
	points=suitPointSystem(suit,ranNum,points,play);
else if (choice=='B' || choice=='b')
	points=numPointSystem(ranNum,num,card,points,play);
else if (choice=='C' || choice=='c')
	points=facePointSystem(face,ranNum,points,play);
else if (choice=='D' || choice=='d')
	points=colorPointSystem(ranNum,points,play,color);

	
}
	return 0;
	
}

char choiceInput(int points)
{
	char choice;
	while (1)
	{
	printf("you have %d points to play with, what would you like to do? \n\n", points);
	printf("\tA.      Guess a suit (Hearts, Diamonds, Spades and Clubs\n");
	printf("\tB.      Guess a number card (Ace counts as a number 1, 2 -10)\n");
	printf("\tC.      Guess a face card (Jack, Queen, King)\n");
	printf("\tD.      Guess a color card (Red or Black)\n");
	printf("\tQ.      Quit the game\n");
	printf("choice: ");	
		scanf("%c",&choice);
		getchar();
	if (choice=='A' || choice=='a' || choice=='B' || choice=='b' || choice=='C' || choice=='c' || choice=='D' || choice=='d' || choice=='Q' || choice=='q')
		break;
	else
		printf("Invalid Entry! Please try again\n\n");
	
	}
	return choice;	
}

char suitInput()
{	
	char suit;
	while(1)
	{
	
		printf("\nchoose a suit for the following menu:\n\n");
		printf("\tH: Hearts\n");
		printf("\tD: Diamonds\n");
		printf("\tS: Spades\n");
		printf("\tC: Clubs\n");
		printf("choice: ");
			scanf("%c", &suit);
			getchar();
	if(suit=='H' || suit=='h' || suit=='D' || suit=='d' || suit=='S' || suit=='s' || suit=='C' || suit=='c')
		break;
	else
		printf("invalid entry, please try again\n\n");
	}
	return suit;
}

int numInput()
{
	int num;
	while(1)
	{
		printf("\nChoose a number between 1-10: ");
			scanf("%d", &num);
			getchar();
	if (num>=1 && num<=10)
		break;
	if (num<1)
		printf("you cant choose 0\n");
	else 
		printf("invalid entry, please try again\n");
	}
	return num;
}

char faceInput()
{
	char face;
	while(1)
	{
		printf("\nChoose a face card: \n\n");
		printf("\tJ: Jack\n");
		printf("\tQ: Queen\n");
		printf("\tK: King\n");
		printf("choice: ");
			scanf("%c", &face);
			getchar();
	if(face=='J' || face=='j' || face=='Q' || face=='q' || face=='K' || face=='k')
		break;
	else
		printf("invalid entry, please try again\n\n");
	}

	return face;
}

char colorInput()
{
	char color;
	while (1)
	{
		printf("\nChoose a color:\n\n");
		printf("\tR: Red\n");
		printf("\tB: Black\n");
		printf("choice: ");
			scanf("%c", &color);
			getchar();
	if (color=='R' || color=='r' || color=='B' || color=='b')
		break;
	else
		printf("invalid entry, please try again\n\n");		
	}
	return color;
}

int randomNumberCard (int ranNum)
{
	int card, jack=11, queen=12, king=13, joker, ace=1;
	
	if(ranNum==1 || ranNum==15 || ranNum==29 || ranNum==43)
	{   
		card=ace;
		printf("Card:ace\n");
	}
	else if(ranNum==2 || ranNum==16 || ranNum==30 || ranNum==44)
	{
		card=2;
		printf("Card:2\n");
	}
	else if (ranNum==3 || ranNum==17 || ranNum==31 || ranNum==45)
	{
		card=3;
		printf("Card:3\n");
	}
	else if (ranNum==4 || ranNum==18 || ranNum==32 || ranNum==46)
	{
		card=4;
		printf("Card:4\n");
	}
	else if (ranNum==5 || ranNum==19 || ranNum==33 || ranNum==47)
	{
		card=5;
		printf("Card:5\n");
	}
	else if (ranNum==6 || ranNum==20 || ranNum==34 || ranNum==48)
	{
		card=6;
		printf("Card:6\n");
	}
	else if (ranNum==7 || ranNum==21 || ranNum==35 || ranNum==49)
	{
		card=7;
		printf("Card:7\n");
	}
	else if (ranNum==8 || ranNum==22 || ranNum==36 || ranNum==50)
	{
		card=8;
		printf("Card:8\n");
	}
	else if (ranNum==9 || ranNum==23 || ranNum==37 || ranNum==51)
	{
		card=9;
		printf("Card:9\n");
	}
	else if (ranNum==10 || ranNum==24 || ranNum==38 || ranNum==52)
	{
		card=10;
		printf("Card:10\n");	
	}
	else if (ranNum==11 || ranNum==25 || ranNum==39 || ranNum==53)
	{
		card=jack;
		printf("Card:Jack\n");
	}
	else if (ranNum==12 || ranNum==26 || ranNum==40 || ranNum==54)
	{
		card=queen;
		printf("Card:Queen\n");
	}
	else if (ranNum==13 || ranNum==27 || ranNum==41 || ranNum==55)
	{
		card=king;
		printf("Card:King\n");
	}
	else if(ranNum==14 || ranNum==28 || ranNum==42)
	{
		card=joker;
		printf("Card:Joker\n");	
	}
	return card;
}

void randomNumberSuit(int ranNum)
{
	if (ranNum>=1 && ranNum<=13)
	{
		printf("Suit:Hearts\n\n");
	}
	else if(ranNum>=15 && ranNum<=27)
	{
		printf("Suit:Dimonds\n\n");
	}
	else if(ranNum>=29 && ranNum<=41)
	{
		printf("Suit:Spades\n\n");
	}
	else if(ranNum>=43 && ranNum<=55)
	{
		printf("Suit:Clubs\n\n");
	}
}

int suitPointSystem(char suit, int ranNum, int points, int play)
{
	switch (suit)
		{
			case 'H': case 'h':
		if (ranNum>=1 && ranNum<=13)
		{
			return (points-play)+play*4;
		}
		else if(ranNum==14 || ranNum==28 || ranNum==42)
		{
			printf("You have selected a joker, that means you win 10x the points you played\n");
			return (points-play)+play*10;
		}
		else
			return points-play;
			case 'D': case 'd':
		if (ranNum>=15 && ranNum<=27)
		{
			return (points-play)+play*4;
		}
		else if(ranNum==14 || ranNum==28 || ranNum==42)
		{
			printf("You have selected a joker, that means you win 10x the points you played\n");
			return (points-play)+play*10;
		}
		else
			return points-play;
			case 'S': case 's':
		if (ranNum>=29 && ranNum<=41)
		{
			return (points-play)+play*4;
		}
		else if(ranNum==14 || ranNum==28 || ranNum==42)
		{
			printf("You have selected a joker, that means you win 10x the points you played\n");
			return (points-play)+play*10;
		}
		else
			return points-play;
			case 'C': case 'c':
		if (ranNum>=43 && ranNum<=55)
		{
			return (points-play)+play*4;
		}
		else if(ranNum==14 || ranNum==28 || ranNum==42)
		{
			printf("You have selected a joker, that means you win 10x the points you played\n");
			return (points-play)+play*10;
		}
		else
			return points-play;
		}
	
}

int numPointSystem(int ranNum, int num, int card, int points, int play)
{
	if (num==card)
		return (points-play)+play*3;
	else if(ranNum==14 || ranNum==28 || ranNum==42)
		{
			printf("You have selected a joker, that means you win 10x the points you played\n");
			return (points-play)+play*10;
		}
	else 
		return points-play;
}

int facePointSystem(char face, int ranNum, int points, int play)
{
	switch (face)
		{
			case 'J': case 'j':
				if (ranNum==11 || ranNum==25 || ranNum==39 || ranNum==53)
					return (points-play)+play*5;
				else if(ranNum==14 || ranNum==28 || ranNum==42)
				{
					printf("You have selected a joker, that means you win 10x the points you played\n");
					return (points-play)+play*10;
				}
				else
					return points-play;
			case 'Q': case 'q':
				if (ranNum==12 || ranNum==26 || ranNum==40 || ranNum==54)
					return (points-play)+play*5;
				else if(ranNum==14 || ranNum==28 || ranNum==42)
					{
						printf("You have selected a joker, that means you win 10x the points you played\n");
						return (points-play)+play*10;
					}
				else
					return points-play;
			case 'K': case 'k':
				if (ranNum==13 || ranNum==27 || ranNum==41 || ranNum==55)
					return (points-play)+play*5;
				else if(ranNum==14 || ranNum==28 || ranNum==42)
				{
					printf("You have selected a joker, that means you win 10x the points you played\n");
					return (points-play)+play*10;
				}	
				else
					return points-play;
		}
	
}

int colorPointSystem(int ranNum, int points, int play, char color)
{
	switch (color)
		{
			case 'R': case 'r':
				if (ranNum>=1 && ranNum<=13 || ranNum>=15 && ranNum<=27)
				{
					return (points-play)+play*2;
				}
				else if(ranNum==14 || ranNum==28 || ranNum==42)
				{
					printf("You have selected a joker, that means you win 10x the points you played\n");
					return (points-play)+play*10;
				}
				else 
					return points-play;
			case 'B': case 'b':
				if (ranNum>=29 && ranNum<=41 || ranNum>=43 && ranNum<=55)
				{
					return (points-play)+play*2;
				}
				else if(ranNum==14 || ranNum==28 || ranNum==42)
				{
					printf("You have selected a joker, that means you win 10x the points you played\n");
					return (points-play)+play*10;
				}
				else 
					return points-play;
		}
	
}
