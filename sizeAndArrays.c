#include <stdio.h>

int main(int argc, char*argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Mayank";
    char full_name[] = {'M', 'a', 'y', 'a', 'n', 'k', ' ', 'D', '.', ' ', 'P', 'a', 'w', 'a', 'r', '\0'};
    
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas int[]: %ld\n", sizeof(areas));
    
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name char[]: %ld\n", sizeof(name));

    printf("The size of full name: %ld\n", sizeof(full_name));
    printf("Number of char in full name char[]: %ld\n", sizeof(full_name) / sizeof(char));
    return 0;
}