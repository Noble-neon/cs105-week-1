#include<stdio.h>
#include<ctype.h>

int main (void) {
    char s[100];
    int freq[26] = {0};
    scanf("%s", s);
    for (int i = 0; s[i]!='\0'; i++){
        char h = s[i];
        if (s[i]  >= 'a' && s[i] <= 'z'){
            char c  = tolower(s[i]);
            int index = c - 'a';
            freq[index]++; 
        }
    }
    for (int i = 0; i < 26; i++){
        if (freq[i] != 0) {
        printf("%c %i \n", 'a' + i, freq[i]); }
    }
} 