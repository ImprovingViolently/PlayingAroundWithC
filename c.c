#include <stdio.h>
#include <stdlib.h>

int main() {
    int selection;
    
    welcomeMessage();
    
    printf("please select a value:\n");
    scanf("%d", &selection);
    
    switch(selection) {
        case 0 :
            system("clear");
            printf("selected About\n");
            aboutSheet();
            break;
        case 1 :
            system("clear");
            printf("selected 1\n");
            break;
        default:
            system("clear");
            printf("invalid selection");
            main();
            break;
    }
    return 0;
}

void welcomeMessage() {
    printf("--------------------------------------------------\n");
    printf("            Welcome to Program, User!             \n");
    printf("--------------------------------------------------\n");
    printf("~Table of Contents~                               \n");
    printf("[0] About                                         \n");
    printf("[1] Sussy                                         \n");
    return;
}

void aboutSheet() {
    printf("--------------------------------------------------\n");
    printf("This program is a multipurpose, fairly useless pr-\n");
    printf("ogram, made to learn the C language, while bored  \n");
    printf("out of my mind. \n\n");
    printf("To exit the program, type 0, to return, type 1\n");
    return;
}

