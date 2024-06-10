#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <strings.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};
struct stud {
    int roll;
    char dept_code;
    float cgpa;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("Age: %d\n",who->age);
    printf("Height: %d\n", who->height);
    printf("Weight: %d\n", who->weight);
}

int main(int argc, char *agrv[]){
    // Make 2 people structures.
    struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

    // Print them out and their memory location.
    printf("Joe is at %p.\n", joe);
    Person_print(joe);

    printf("Frank is at %p.\n", frank);
    Person_print(frank);

    // Make some changes and print them again.
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

    // Clean by destroying them.
    Person_destroy(joe);
    Person_destroy(frank);

    struct stud *studArray = (struct stud *) malloc(sizeof(struct stud*) * 10);
    int i = 1;
    while (i < 11)
    {
        printf("Enter roll no of student %d: ", i);
        scanf("%d", &(studArray[i].roll));
        printf("Enter dept_code of student %d: ", i);
        scanf("%s", &(studArray[i].dept_code));
        printf("Enter cgpa of student %d: ", i);
        scanf("%f", &(studArray[i].cgpa));
        i++;
    }
    struct stud temp = studArray[0];
    i = 1;
    while (i < 10)
    {
        if (temp.cgpa < studArray[i].cgpa)
            temp = studArray[i];
        i++;
    }
    free(studArray);
    printf("The roll number of Student with max CGPA is: %d",
           temp.roll);

    return 0;
}
