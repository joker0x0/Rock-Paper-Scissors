#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "game.h"

//this function show the player the main options available to choose from wither to play the game, exit, or if the user
//gave wrong input it recalls the function to make sure the user doesn't miss with the program written.
void mainOptions() {

      char wannaPlay;

      printf("Do You Want To Play? y/n: ");
      scanf("%c", &wannaPlay);
      wannaPlay = tolower(wannaPlay);

      switch(wannaPlay) {
        case 'y':
            //here we call the game function now and start the game from the header file game.h
            fflush(stdin);
            printf("Good Let's Go\n");
            play();
            break;
        case 'n':
            // Just exit the program
            printf("Goodbye Then :(\n");
            exit(0);
            break;
        default:
            //the game resets the options menu again
            fflush(stdin);
            printf("Wrong Option\n");
            mainOptions();
    }

}

//this function just calls the home screen for the user to show a welcome message
void welcomePage() {
    printf(" *********************\n");
    printf(" *                   *\n");
    printf(" *                   *\n");
    printf(" *Welcome To RPS Game*\n");
    printf(" *                   *\n");
    printf(" *                   *\n");
    printf(" *********************\n");
}


int main() {

    //calling the weclome page to start off the game
    welcomePage();
    //calling the main options menu to the player to choose if they want to play or now
    mainOptions();
  
    return 0;
}

//Eng. Roshdy E.