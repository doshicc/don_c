#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int age;
    float average;
};

int main() {
    struct Student student1;
    strcpy(student1.name, "Дон Дарья");
    student1.age = 16;
    student1.average = 8.5;

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Average: %.1f\n", student1.average);

    struct Student student2;
    fgets(student2.name, sizeof(student2.name), stdin);
    scanf("%d", &student2.age);
    scanf("%f", &student2.average);

    printf("Name: %s", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Average: %.1f\n", student2.average);
    return 0;

}
