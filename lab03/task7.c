#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    int age;
};

int main() {
    struct Student *students = NULL;
    int n;
    scanf("%d", &n);
    students = (struct Student*)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].age);
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", students[i].name, students[i].age);
    }

    int max_age_index = 0;
        
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[max_age_index].age) {
            max_age_index = i;
        }
    }

    printf("the oldest student: %s %d\n", students[max_age_index].name, students[max_age_index].age);

}
