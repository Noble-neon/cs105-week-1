#include<stdio.h>


int main(void) {
    char s[100];
    char r[100];
    scanf("%s", s);

    for (int i = 0; i < sizeof(s) / s[0] + 1; i++) {
        // take an item from s, the item will be i index
        // find a way to convert that item to its lowercase form
        // add that item to r
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        } 
    }
    printf("%s", s);
}