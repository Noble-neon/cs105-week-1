#include<stdio.h>
int main(void) {
        printf("what's your name? ");
        char name[100];
        scanf("%s",  name);
        printf("hello, ");
        printf("%s\n", name);
}


/* %c reads only the first character
& shows the adress of the variable
for an array of chars it will link
 only to  th efirst char, so dont use it like that
 Give the type in a string with %, and the variable
  as the second argument*/
