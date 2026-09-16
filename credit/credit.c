#include<stdio.h>

/* UPD I ll try to refactor it latter (I'm too busy right now),

Ok
Firstly we need to store the digits in an array
then apply the Luhns algorithm
    select only the one whose i % 2 == 0

How to get every number there ?*/

int main(void){
    unsigned long long number;
    printf("Number:");
    scanf(" %llu", &number);

    int digits[20] = {};
    int to_double[10] = {};
    int doubled_single[10] = {};
    int not_doubled[10] = {};
    int doubled_with_two_digits[10] = {};
    int counter_digits = 0;     // also length of numbers
    while(number > 0) {
            digits[counter_digits++] = number % 10; // get last digit
            number /= 10;                  // Remove last digit
        }
                    
    int digit_count = 0;    // how much in picked ones;  the array is already reversed
    int not_doubled_count = 0;    // items at not_doubled   ;   pick the needed ones
    for (int i = 0; i < counter_digits; i++){    
        if (i % 2 != 0){            
            to_double[digit_count++] = digits[i];
        } else {
            not_doubled[not_doubled_count++] = digits[i];
        }
    }
    int counter_two_digits = 0; // how much items at doubled with two digits
    int doubled_count = 0; // how much items at  doubled
    for (; doubled_count < digit_count; doubled_count++){
        int twice = to_double[doubled_count] * 2;
        if (twice > 9){
            doubled_with_two_digits[counter_two_digits++] = twice / 10;
            doubled_with_two_digits[counter_two_digits++] = twice % 10;
        } else {
            doubled_single[doubled_count] = twice; 
        }
    }
    int added = 0;
    for (int j = 0; j < doubled_count; j++ ) {
        added += doubled_single[j];          // addd individual digits
    }
    for (int t = 0; t < counter_two_digits; t++){
        added += doubled_with_two_digits[t];  // add non individual digits
    }
    for (int z = 0; z < not_doubled_count; z++){
        added += not_doubled[z];    // add not doubled
    }
    int first_digit = digits[counter_digits - 1]; // taking needed variables for later checking
    int first_two_digits = digits[counter_digits -1] * 10 + digits[counter_digits - 2];
    if (added % 10 == 0){
        if (counter_digits == 15 && (first_two_digits == 34 || first_two_digits == 37)) {
            printf("AMEX\n");
        } else if (counter_digits == 16 && first_two_digits >= 51 && first_two_digits <= 55) {
            printf("MASTERCARD\n");
        } else if ((counter_digits == 13 || counter_digits == 16) && first_digit == 4) {
            printf("VISA\n");
        } else {
            printf("INVALID\n");
        }
    } else {
        printf("INVALID\n");
    }
    }