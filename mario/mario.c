#include<stdio.h>

int main(void)
{
    int height = 0;
    int sizeNow = 0;

    while(height < 1){
        printf("Height: ");
        scanf("%i", &height);        
    }

    for(; height > 0; height--) {
        for(int j = 0; height>= j; j++){
            printf(" ");
        } 
        for(int i = 0; sizeNow >= i; i++){
            printf("#");
        }
        printf("\n");
        sizeNow++;
    }
}