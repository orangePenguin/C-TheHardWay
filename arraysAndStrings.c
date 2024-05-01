#include <stdio.h>

int main(int argc, char*argv[])
{
    int numbers[4] = {1, 2, 3, 4};
    char *name = "Mayank";
    printf("%d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("%s\n", name);

    // Extra Credit.
    for (int i = sizeof(name); i >= 0 ; i--) {
        printf("%c\n", name[i]);
    }
    return 0;
}