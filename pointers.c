#include <stdio.h>

int int main(int argc, char *argv[])
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

  // Setup the pointers to start up the program.
  int *cur_age = ages;
  int **cur_name = names;

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

  return 0;
}
