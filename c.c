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
    printf("--------------------------------------------------\n");
    return;
}

void aboutSheet() {
    
    int input;
    
    printf("--------------------------------------------------\n");
    printf("This program is a multipurpose, fairly useless pr-\n");
    printf("ogram, made to learn the C language, while bored  \n");
    printf("out of my mind. \n\n");
    printf("As a result of my messy, novice code, this thing  \n");
    printf("runs like shit and serves very little function be-\n");
    printf("sides producing about 3 hours of fun on a boring  \n");
    printf("afternoon.\n\n");
    printf("--------------------------------------------------\n");
    printf("[0] To Return\n");
    printf("[1] To Reboot Your PC\n");
    printf("--------------------------------------------------\n");
    printf("please select a value:\n");
    scanf("%d", &input);
    
    switch(input) {
        case 0 :
            system("clear");
            printf("selected Return\n");
            main();
            break;
        case 1 :
            system("clear");
            system("sudo shutdown -r now");
            break;
        default:
            system("clear");
            printf("invalid selection");
            aboutSheet();
            break;
    }

    return;
}
