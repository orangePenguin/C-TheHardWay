#include <stdio.h>

int main(int argc, char*argv[])
{
    if (argc != 2) {
        printf("Error! You need an Argument.\n");
        return 1; //Aborting a Program.
    }

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) { // \0 is the last char of a String (here, Using it as an Endpoint).
        char letter = argv[1][i];

        switch (letter)
        {
        case 'A':
            printf("%d\n", i);
            break;
        
        case 'E':
            printf("%d\n", i);
            break;

        case 'I':
            printf("%d\n", i);
            break;

        case 'O':
            printf("%d\n", i);
            break;

        case 'U':
            printf("%d\n", i);
            break;
    
        default:
            printf("%d: %c is not a vowel!\n", i, letter);
            break;
        }
    }
    return 0;
}