#include <stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

    // Safely get the size of ages.
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // First way of using indexing.
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
    printf("---\n");

    // Set up the pointers to start up the program.
    int *cur_age = ages;
    char **cur_name = names;

    // Second way of using pointers.
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");

    // Third way, pointers are just arrays.
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }
    printf("---\n");

    // Fourth way of using pointers.
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
    printf("---\n");

    // 3 pointer element array.
      int *ptr[3], iA[]={5, 10, 15}, iB[] = {1, 2, 3}, iC[] = {2, 4, 6};
      ptr[0] = iA, ptr[1] = iB, ptr[2] = iC;

    for (i = 0; i < 3; i++) {
        printf("iA[%d]: addr:%p, data:%d\n", i, ptr[0]+1, *(ptr[0]+1));
        printf("iB[%d]: addr:%p, data:%d\n", i, ptr[1]+1, *(ptr[1]+1));
        printf("iC[%d]: addr:%p, data:%d\n", i, ptr[2]+1, *(ptr[2]+1));
    }
    return 0;
}
