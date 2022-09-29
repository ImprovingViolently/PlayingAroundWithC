//----------------------------------------------------------------------------------------------------
//                                  Project-C (c) MrSilveryGibbon 2022                                
//----------------------------------------------------------------------------------------------------
//
//      ------------------------------------------------------
//                  Usage Crediting and Licensing
//      ------------------------------------------------------
//      This program is free for any and all use, and is by no
//      means a perfect or final product. I have no clue why
//      anyone in their right mind would build and run this d-
//      amned thing but it is what it is.
//
//      If for whatever reason you do decide to build and use
//      this dumpster fire, please do not for whatever reaso-
//      n credit me. I don't want my name on this mess more
//      than it already is.
//      -----------------------------------------------------
//
//      -----------------------------------------------------
//                      Building and Running
//      -----------------------------------------------------
//      This program is designed using and for Debian systems
//      such as Ubuntu. For building, I use gcc, to install
//      gcc, use:
//
//      || sudo apt install gcc
//
//      For building, download c.c to your system, navigate
//      to the directory using cd and use the following:
//
//      || gcc c.c -o projectc
//
//      Followed directly by:
//
//      || ./projectc
//      -----------------------------------------------------
//
//----------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

int main() {
    //Displays a Welcome Message
    welcomeMessage();
    //Displays Menu Options
    menu();
    //Obligatory Return Value
    return 0;
}

int menu() {
    int selection;
 
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
            printf("invalid selection\n");
            main();
            break;
    }
    return 0;
}

void welcomeMessage() {
    printf("--------------------------------------------------\n");
    printf("           Welcome to Project-C, User!            \n");
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
    printf("out of my mind.                                 \n\n");
    printf("As a result of my messy, novice code, this thing  \n");
    printf("runs like shit and serves very little function be-\n");
    printf("sides producing about 3 hours of fun on a boring  \n");
    printf("afternoon.                                      \n\n");
    printf("--------------------------------------------------\n");
    printf("[0] To Return                                     \n");
    printf("[1] To Reboot Your PC                             \n");
    printf("--------------------------------------------------\n");
    printf("please select a value:                            \n");
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
