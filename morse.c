#include <stdio.h>
#include <string.h>

int charToMorse(char input)
{
    if (input == 'a' || input == 'A') {
        printf(".- ");
    } else if (input == 'b' || input == 'B'){
        printf("-... ");
    } else if (input == 'c' || input == 'C'){
        printf("-.-. ");
    } else if (input == 'd' || input == 'D'){
        printf("-.. ");
    } else if (input == 'e' || input == 'E'){
        printf(". ");
    } else if (input == 'f' || input == 'F'){
        printf("..-. ");
    } else if (input == 'g' || input == 'G'){
        printf("--. ");
    } else if (input == 'h' || input == 'H'){
        printf(".... ");
    } else if (input == 'i' || input == 'I'){
        printf(".. ");
    } else if (input == 'j' || input == 'J'){
        printf(".--- ");
    } else if (input == 'k' || input == 'K'){
        printf("-.- ");
    } else if (input == 'l' || input == 'L'){
        printf(".-.. ");
    } else if (input == 'm' || input == 'M'){
        printf("-- ");
    } else if (input == 'n' || input == 'N'){
        printf("-. ");
    } else if (input == 'o' || input == 'O'){
        printf("--- ");
    } else if (input == 'p' || input == 'P'){
        printf(".--. ");
    } else if (input == 'q' || input == 'Q'){
        printf("--.- ");
    } else if (input == 'r' || input == 'R'){
        printf(".-. ");
    } else if (input == 's' || input == 'S'){
        printf("... ");
    } else if (input == 't' || input == 'T'){
        printf("- ");
    } else if (input == 'u' || input == 'U'){
        printf("..-- ");
    } else if (input == 'v' || input == 'V'){
        printf("...- ");
    } else if (input == 'w' || input == 'W'){
        printf(".-- ");
    } else if (input == 'y' || input == 'Y'){
        printf("-.-- ");
    } else if (input == 'z' || input == 'Z'){
        printf("--.. ");
    } else if (input == '1'){
        printf(".---- ");
    } else if (input == '2'){
        printf("..--- ");
    } else if (input == '3'){
        printf("...-- ");
    } else if (input == '4'){
        printf("....- ");
    } else if (input == '5'){
        printf("..... ");
    } else if (input == '6'){
        printf("-.... ");
    } else if (input == '7'){
        printf("--... ");
    } else if (input == '8'){
        printf("---.. ");
    } else if (input == '9'){
        printf("----. ");
    } else if (input == '0'){
        printf("----- ");
    } 
}

int morseToChar(char input[])
{
    char * pch;

    pch = strtok(input," ");

    while (pch != NULL)
    {
        if (strcmp(pch, ".-") == 0) {
            printf("a");
        } else if (strcmp(pch, "-...") == 0) {
            printf("b");
        } else if (strcmp(pch, "-.-.") == 0) {
            printf("c");
        } else if (strcmp(pch, "-..") == 0) {
            printf("d");
        } else if (strcmp(pch, ".") == 0) {
            printf("e");
        } else if (strcmp(pch, "..-.") == 0) {
            printf("f");
        } else if (strcmp(pch, "--.") == 0) {
            printf("g");
        } else if (strcmp(pch, "....") == 0) {
            printf("h");
        } else if (strcmp(pch, "..") == 0) {
            printf("i");
        } else if (strcmp(pch, ".---") == 0) {
            printf("j");
        } else if (strcmp(pch, "-.-") == 0) {
            printf("k");
        } else if (strcmp(pch, ".-..") == 0) {
            printf("l");
        } else if (strcmp(pch, "--") == 0) {
            printf("m");
        } else if (strcmp(pch, "-.") == 0) {
            printf("n");
        } else if (strcmp(pch, "---") == 0) {
            printf("o");
        } else if (strcmp(pch, ".--.") == 0) {
            printf("p");
        } else if (strcmp(pch, "--.-") == 0) {
            printf("q");
        } else if (strcmp(pch, ".-.") == 0) {
            printf("r");
        } else if (strcmp(pch, "...") == 0) {
            printf("s");
        } else if (strcmp(pch, "-") == 0) {
            printf("t");
        } else if (strcmp(pch, "..--") == 0) {
            printf("u");
        } else if (strcmp(pch, "...-") == 0) {
            printf("v");
        } else if (strcmp(pch, ".--") == 0) {
            printf("w");
        } else if (strcmp(pch, "-..-") == 0) {
            printf("x");
        } else if (strcmp(pch, "-.--") == 0) {
            printf("y");
        } else if (strcmp(pch, "--..") == 0) {
            printf("z");
        } else if (strcmp(pch, ".----") == 0) {
            printf("1");
        } else if (strcmp(pch, "..---") == 0) {
            printf("2");
        } else if (strcmp(pch, "...--") == 0) {
            printf("3");
        } else if (strcmp(pch, "....-") == 0) {
            printf("4");
        } else if (strcmp(pch, ".....") == 0) {
            printf("5");
        } else if (strcmp(pch, "-....") == 0) {
            printf("6");
        } else if (strcmp(pch, "--...") == 0) {
            printf("7");
        } else if (strcmp(pch, "---..") == 0) {
            printf("8");
        } else if (strcmp(pch, "----.") == 0) {
            printf("9");
        } else if (strcmp(pch, "-----") == 0) {
            printf("0");
        } 
        
        pch = strtok(NULL, " ");
    }
    return 0;

} 