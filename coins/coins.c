#include<stdio.h>

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
    printf(" %i", minimum);
    // check whether it is divisible by the bigest number now
    // find out how many  whole biggest numbers are in the dirams  
    // and make th ecode ignore the part smaller than the biggest number
    // add to minimum each time 
}