#include<stdio.h>

/*Prompt the user with Change owed (dirams):.
Read the amount as an int using scanf and %d.
Accept 0 or a positive integer divisible by 10.
Re-prompt when the amount is negative.
Re-prompt when the amount is not divisible by 10, because the smallest available coin is 10 dirams.
Re-prompt when the input is not an integer.
Calculate the minimum number of coins using the values listed above.
Print only the final number of coins, followed by a new line.*/

int main(void)
{
    int dirams;
    do {
        printf("Change owed (dirams):");
        scanf(" %i", &dirams);
    } while ((dirams >= 10) && !(dirams % 10 == 0));

    int minimum = 0;

    int coins[] = {500, 300, 100, 50, 20, 10};
    for (int i = 0; i < 6; i++){
        if (dirams >= coins[i]){
            minimum += (dirams / coins[i]);
            dirams -= (dirams / coins[i]) * coins[i];
        }
    }

    // Integers drop the decimal part when divided
    /* The old ugly version:
    if (dirams >= 500) {
        minimum += (dirams / 500);
        dirams -=  (dirams / 500) * 500;
    } 
    if (dirams >= 300) {
        minimum += (dirams / 300);
        dirams -= (dirams / 300) * 300;
    }
    if (dirams >= 100) {
        minimum += (dirams / 100);
        dirams -= (dirams / 100) * 100;
    }
    if (dirams >= 50) {
        minimum += (dirams / 50);
        dirams -= (dirams / 50) * 50;
    }
    if (dirams >= 20) {
        minimum += (dirams / 20);
        dirams -= (dirams / 20) * 20;
    }
    if (dirams >= 10) {
        minimum += (dirams / 10);
        dirams -= (dirams / 10) * 10;
    } */
    printf(" %i", minimum);
    // check whether it is divisible by the bigest number now
    // find out how many  whole biggest numbers are in the dirams  
    // and make th ecode ignore the part smaller than the biggest number
    // add to minimum each time 
}