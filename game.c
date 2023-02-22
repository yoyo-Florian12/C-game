#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
int main (void) {
    printf("Hello! This is a game completely based on text.\n");
    Sleep(1000);
    printf("do you want to continue?\t");
    char input[10];
    fgets(input, sizeof(input), stdin);
    Sleep(1000);
    if (strcasecmp(input, "Yes\n") == 0 ) {
      printf("You decided to wander off in order to find the great crown of zekenthos, but you find yourself lost.\n");
      Sleep(2000);
      printf("you have the options to go into 4 directions.\n");
      Sleep(1500);
      printf("Option 1: North trough the mountains\n");
      Sleep(1500);
      printf("Option 2: East trought the great river\n");
      Sleep(1500);
      printf("Option 3: South trough the canyon.\n");
      Sleep(1500);
      printf("Option 4: West trough the swamp.\n");
      Sleep(1500);
    } else if (strcasecmp(input, "No\n") == 0 ) {
        printf("Okay your loss.");
        exit(0);
    } else {
        printf("ERROR: invalid input.");
    }   
    char choice[10];
    printf("What choice will you make?\n");
    fgets(choice, sizeof(choice), stdin);
    if (strcasecmp(choice, "North\n") == 0 ) {
        printf("You chose to go trough the mountains... But Oh no! A yeti just jumped out of the bushes!\nWhat will you do!\n");
    } else if (strcasecmp(choice, "east\n") == 0 ) {
        printf("You chose to go trough the river. you have the choice to make a boat or swim.\n");
    } else if (strcasecmp(choice, "south\n") == 0 ) {
        printf("You are wandering in the canyon when you come across a split path the options are to go left or right.\nWhat will you choose?\n");
        char left[10];
        fgets(left, sizeof(left), stdin);
        if (strcasecmp(left, "left\n") == 0) {
            printf("You are wandering trough the canyon when you suddenly come across a giant rattle snake of more than 10 meters!\n What will you do!\n");
        } else if (strcasecmp(left, "right\n") == 0 ) {
            printf("");
        }        
    } else if (strcasecmp(choice, "west")) {
        printf("you have the choice to make a hammer or an axe.\nwich one will you pick?\n");
        char hammer[10];
        fgets(hammer, sizeof(hammer), stdin);
        if (strcasecmp(hammer, "hammer\n") == 0 ) {
            printf("You are wandering trough the muddy swamp when suddenly a giant alligator jumps out of the water!\n WHat will you do!\n");
            printf("Option 1: Fight it.\n");
            Sleep(1000);
            printf("Option 2: Run away.\n");
        } else if (strcasecmp(hammer, "axe\n")) {
            printf("You are wandering trough the muddy swamp when suddenly a giant boa jumps out of the water!\n");
            printf("Option 1: Fight it.\n");
            Sleep(1000);
            printf("Option 2: Run away.\n");
        }
        
    }
    return 0;
}