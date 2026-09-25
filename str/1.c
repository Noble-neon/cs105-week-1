#include<stdio.h>

int main(void){
    char s[100];
    scanf("%s", s);
    int l = 0;
    while (s[l] != '\0') {
        l++;
    }
    printf("%i", l);
}