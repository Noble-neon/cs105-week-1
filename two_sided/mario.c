#include<stdio.h>

int main(void)
{
    int height = 0;
    int sizeNow = 0;
    int copy_height = 0;

    while(height < 1){
        printf("Height: ");
        scanf("%i", &height);  //reprompt irrelevent input
    }

    copy_height = height;      // save original height 

    for(int j = 0; height>= j; j++){
            printf(" ");       // add spaces
        } 
    for(; height > 0; height--) {
        for(int j = 0; height>= j; j++){
            printf(" ");       // add spaces
        } 

        if (copy_height % 2 != 0) {
            printf("#");                       // single middle # for odd height
            for(int i = 0; sizeNow > i; i++){
                printf("##");
            }
        } else {
            for(int i = 0; sizeNow >= i; i++){
                printf("##");                  // actually print #
            }
        }

        for(int j = 0; height>= j; j++){
            printf(" ");       // add spaces
        } 

        printf("\n");
        sizeNow++;
    }
}