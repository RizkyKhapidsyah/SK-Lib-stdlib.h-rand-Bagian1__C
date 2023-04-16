#pragma warning(disable:4996)

#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>       
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int iSecret, iGuess;

    /* initialize random seed: */
    srand(time(NULL));

    /* generate secret number between 1 and 10: */
    iSecret = rand() % 10 + 1;

    do {
        printf("Guess the number (1 to 10): ");
        scanf("%d", &iGuess);
        
        if (iSecret < iGuess) {
            puts("The secret number is lower");
        } else if (iSecret > iGuess) {
            puts("The secret number is higher");
        }

    } while (iSecret != iGuess);

    puts("Congratulations!");

    _getch();
    return 0;
}