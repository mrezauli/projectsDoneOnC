#include<stdio.h>

int main()
{
    int i, j, lives = 5, similar = 0, checks = 0;
    char input[5], sorted[5], carry, answer[5];

    //taking input
    for ( i = 0; i < 5; i++) {
        scanf("%c", &input[i]);
    }



    //checking input
    //for ( i = 0; i < 5; i++) {
        //printf("%c", input[i]);

    //}

    //printf("\n");

    //copying input
    for ( i = 0; i < 5; i++) {
        sorted[i] = input[i];
    }

    //checking sorted
    //for ( i = 0; i < 5; i++) {
        //printf("%c", sorted[i]);
    //}

    //printf("\n");

    //sorting input
    for ( i = 0; i < 5; i++) {
        for ( j = i + 1; j < 5; j++) {
            if ( sorted[i] > sorted[j] ) {
                carry = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = carry;
            }
        }
    }

    //checking sorted
    //for ( i = 0; i < 5; i++) {
        //printf("%c", sorted[i]);
    //}

    //printing dash
    for ( i = 0; i < 5; i++) {
        printf("_");
    }

    printf("\n");

    printf("please enter your input");
    printf("\n");
    printf("you have left 5 lives");
    printf("\n");

    //input from another player
    for ( i = 0; i < 5; i++) {
        scanf("%c", answer[i]);
        printf("%c\n", answer[i]);

        //checking with predefined input
        for ( j = 0; j < 5; j++ ) {
            if ( answer[i] == sorted[j] ) {
                similar = 1;
                checks++;
                break;
            }
        }

        //showing similarity
        if ( similar == 1 ) {
            printf("yes!");
            printf("\n");
        }
        else if ( similar != 1 ) {
            printf("nope!");
            printf("\n");
            lives--;
            printf("you have left %d lives", lives);
            printf("\n");
        }



    }

    //showing hanging condition
    if ( checks == 5 ) {
        printf("SUCCESS!");
        for ( i = 0; i < 5; i++ ) {
            printf("%c",input[i]);
        }
        printf("\n");
    }
    else if ( lives == 0 ) {
        printf("you are hanged!");
        printf("\n");
        printf(" |____");
        printf("\n");
        printf(" |   |");
        printf("\n");
        printf(" |   O");
        printf("\n");
        printf(" |  /|\\");
        printf("\n");
        printf(" |   |");
        printf("\n");
        printf(" |  / \\");
        printf("\n");
        printf("_|____");
    }



    return 0;
}
