#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int mynum, halt;
int myguess, capital, bet, numGuess, choice;

int main(){
    capital = 10000;
    srand(time(NULL));
    do{
	clrscr();
	printf("Guessing Game \n\t\t[1]Play\n\t\t[2]Quit\n\nRemaining Capital: %d\nChoice:  ", capital);
	scanf("%d", &choice);
	switch(choice){
	    case 1:
		printf("\nEnter bet:  ");
		scanf("%d", &bet);
		halt = 4;
		numGuess = 0;
		mynum= rand() % 10 +1;
		do{
		     numGuess++;
		     printf("\n\n\tEnter your guess: ");
		     scanf("%d", &myguess);
		     if (myguess == mynum){
			 printf("\nyou have guessed it correctly!");
			 capital += bet;
			 halt = 1;
			 }
		     else{
			 	 if (numGuess != 3){
			     	printf("\n\tGuess again!");
			 	 	if (myguess < mynum){
			 	 	printf("\n\tyour guessed number is less than my number!");
			 	 	}
			 	 	else if (myguess > mynum){
			 	 		printf("\n\tyour guessed number is greater than my number!");
			 	 	}
			 	 }
		     	 
			 }

		     if (numGuess == 3){
			capital -= bet;
			printf("\n\t\t\tYou lose!");
			getch();
			halt = 1;
			}

		}while(halt != 1 && capital!=NULL);
		break;
	    case 2:
		printf("\n\t\tThank you for Playing!");
	}
    }while (choice != 2);
    getch();
    return 0;
}
