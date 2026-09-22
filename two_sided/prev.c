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
    for(int j = 0; height>= j; j++){
            printf(" ");       // add spaces
        } 
    printf(" # \n");

    for(; height > 0; height--) {
        for(int j = 0; height>= j; j++){
            printf(" ");       // add spaces
        } 
        for(int i = 0; sizeNow >= i; i++){
            printf("##");                  // actually print #
        }
        for(int j = 0; height>= j; j++){
            printf(" ");       // add spaces
        } 

        printf("\n");
        sizeNow++;
    }
}