#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    // get the word
    char name[10];
    scanf("%s", name);

    // pre-print message
    printf("Your ciphered name is ");

    // loop through the word
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        // print each converted char
        printf("%i ", (int)name[i]);
    }
        
}