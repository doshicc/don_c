#include <stdio.h>
#include <string.h>

enum Course {
    ONE = 1,
    TWO,
    THREE,
    FOUR
};

struct Student {
    char name[100];
    int age;
    enum Course course;
    float average;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct Student students[], int low, int high) {
    float pivot = students[high].average;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (students[j].average <= pivot) {
            i++;
            swap(&students[i], &students[j]);
        }
    }
    swap(&students[i + 1], &students[high]);
    return i + 1;
}

void quickSort(struct Student students[], int low, int high) {
    if (low < high) {
        int pi = partition(students, low, high);
        quickSort(students, low, pi - 1);
        quickSort(students, pi + 1, high);
    }
}

int add_student(struct Student students[], char name[], int age, enum Course course, float average, int *size) {
    if (*size >= 10) {
        printf("нельзя добавить студента\n");
        return 0;
    }
    strcpy(students[*size].name, name);
    students[*size].age = age;
    students[*size].course = course;
    students[*size].average = average;
    (*size)++;
    printf("студент %s добавлен\n", name);
    return 1;
}

void show_students(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("имя: %s возраст: %d курс: %d ср балл: %.1f\n", 
               students[i].name, 
               students[i].age, 
               students[i].course, 
               students[i].average);
    }
}

void search_student(struct Student students[], char name[], int size) {  
    for (int i = 0; i < size; i++) {
        if (strcmp(name, students[i].name) == 0) {
            printf("найден студент с именем %s возраст: %d курс: %d ср балл: %.1f\n", 
                   name, students[i].age, students[i].course, students[i].average);
        }
    }
}

int main() {
    struct Student students[10] = {
        {"Дон Дарья", 16, ONE, 10.0},
        {"Яна Гребенникова", 17, ONE, 8.8},
        {"Данила Грачев", 17, TWO, 6.4},
        {"Виктория Баландина", 17, FOUR, 9.8},
        {"Александр Чахиров", 16, ONE, 6.7},
        {"Ульяна Гречишникова", 18, THREE, 9.9}
    };

    int size = 6;  

    show_students(students, size);
    search_student(students, "Ульяна Гречишникова", size);
    add_student(students, "Тихоновский Кирилл", 16, ONE, 2.2, &size);
    quickSort(students, 0, size - 1);
    show_students(students, size);
    
    return 0;
}