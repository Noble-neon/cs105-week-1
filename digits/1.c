#include<stdio.h>

int main(void) {
    int f;
    scanf("%i", f);

    int c = 0;
    for (int i =0; f!=0; i++){
        c += f / (10 *i);
    }
    printf("%i", c);
}