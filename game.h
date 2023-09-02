#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//decalring the play() function to call in the game;
void play();

//the player chooses the symbol which they play with
//and flushs user input after comparing the input to the intended choice
void chooseSymbol(char computerSymbol) {

    char symbol;

    printf("Choose from R/P/S:\n");
    printf("Or Exit (e) ");
    scanf("%c", &symbol);
    symbol = tolower(symbol);
    computerSymbol = tolower(computerSymbol);

    switch (symbol)
    {
    case 'r':
        fflush(stdin);
        if(computerSymbol == 's'){
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("You Win :)\n");
            play();
        } else if(computerSymbol == 'r'){
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("That's A Draw\n");
            play();
        } else {
            printf("The Computer Chose: %c\n\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("You Lose :(\n");
            play();
        }
        break;
    case 'p':
        fflush(stdin);
        if(computerSymbol == 's'){
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("Sorry You Lose\n");
            play();
        } else if(computerSymbol == 'r'){
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("You Win :)\n");
            play();
        } else {
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("That's A Draw\n");
            play();
        }
        break;
    case 's':
        fflush(stdin);
        if(computerSymbol == 's'){
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("That's A Drawn\n");
            play();
        } else if(computerSymbol == 'r'){
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("You Lose :(\n");
            play();
        } else {
            printf("The Computer Chose: %c\n", computerSymbol);
            printf("You Chose %c\n", symbol);
            printf("You Wind\n");
            play();
        }
        break;
     case 'e':
        fflush(stdin);
        printf("Goodbye Then :(\n");
        exit(0);
        break;
    default:
        fflush(stdin);
        printf("Please choose valid option\n");
        chooseSymbol(computerSymbol);
    }

}

//The main function for the game
//it runs the choices and available options
void play() {
    
    srand(time(0));
    int randomNum = (rand() % 3);
    char options[3] = {'R', 'P', 'S'};

    chooseSymbol(options[randomNum]);
    
}