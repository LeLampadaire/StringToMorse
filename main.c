#include <stdio.h>
#include <string.h>
#include "morse.h"

#define BUFFER 250

int main(int argc, char const *argv[])
{
    char input[BUFFER] = {0};
    printf("Traduire en morse [1]\nTraduire du morse [2]\nVotre choix : ");
    int choix = 0;
    scanf("%d", &choix);
    printf("Message :");
    fgets(input, BUFFER, stdin);
    
    if (choix == 1) {
        for(size_t i = 0; i < strlen(input); i++)
        {
            charToMorse(input[i]);
        }
    } else if(choix == 2) {
        morseToChar(input);
    }
    return 0;
}

