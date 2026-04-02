#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[100];
    struct Date birth_date;
};

int main() {
    struct Person person[2];

    strcpy(person[0].name, "Дон Дарья");
    person[0].birth_date.day = 14;
    person[0].birth_date.month = 6;
    person[0].birth_date.year = 2009;

    strcpy(person[1].name, "Александр Чахиров");
    person[1].birth_date.day = 18;
    person[1].birth_date.month = 12;
    person[1].birth_date.year = 1967;

    printf("Имя: %s\n", person[1].name);
    printf("Дата рождения: %d.%d.%d\n", person[1].birth_date.day, person[1].birth_date.month, person[1].birth_date.year);

    for (int i = 0; i < 2; i++) {
        if (person[i].birth_date.year > 2000) {
            printf("Имя: %s\n", person[i].name);
            printf("Дата рождения: %d.%d.%d\n", person[i].birth_date.day, person[i].birth_date.month, person[i].birth_date.year);
        }
    }
    
    return 0;


}
