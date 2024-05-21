#include <stdio.h>

int main(int argc, char*argv[])
{
    int distance = 100;
    printf("You are %d miles away.\n", distance);

    float power = 2.345f;
    printf("You have %f levels of power.\n", power);

    double super_power = 5678.90f;
    printf("You have %f awesome super power.\n", super_power);

    char initial = 'D';
    char first_name[] = "Mayank";
    char last_name[] = "Pawar";
    printf("My name is %s %c. %s\n", first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;

    long universe_of_defects = 1L * 1024L * 1024l * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double part_of_universe = (bugs * bug_rate) / universe_of_defects;
    printf("Expected bugs in comparison with whole universe is %e.\n", part_of_universe);

    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);
    return 0;
}