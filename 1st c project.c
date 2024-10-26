#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int random,guess;
  int no_of_guess = 0 ;


  srand(time(NULL));

  printf("Welcome to the world of Guessing Number\n");
  random = rand() % 100+1;  // generating between 0 to 100

  do{
    printf("\nPlease enter your Guess between(1 to 100) = ");
    scanf("%d",&guess);
    no_of_guess++;

    if(guess < random ){
      printf("\nGuess a larger number ");
    }else if(guess > random){
      printf("\nGuess a smaller number ");
    }
    else{
      printf("\nCongratulation !!! you have successfully guessed the number in %d  attempts\n",no_of_guess);
    }

  }while(guess != random);
  printf("---------------------------------------");
  printf("\nBye Bye , Thanks for Playing .\n");
  printf("Developed by : Harsh Suryavanshi\n");
  printf("---------------------------------------");

  return 0;
}
