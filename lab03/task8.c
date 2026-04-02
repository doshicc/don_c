#include <stdio.h>
#include <stdlib.h>

int *arr = NULL; //глобальные переменные
int size = 0;
int capacity = 2;

struct MenuItem { // для красоты, просто потмоу что умею
    int key;
    const char *description;
    void (*function)();
};

void add_element() { //добавить элемент
    int n;
    scanf("%d", &n);
    
    if (size >= capacity) {
        capacity *= 2;
        int *arr2 = (int*)realloc(arr, capacity * sizeof(int));
        arr = arr2;
    }
    arr[size] = n;
    size++;
}

void delete_element() { // удалить элемент
    int index;
    
    scanf("%d", &index);
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    
    if (size > 0 && size <= capacity / 4 && capacity > 2) {
        capacity /= 2;
        int *arr2 = (int*)realloc(arr, capacity * sizeof(int));
        arr = arr2;
    }
}

void print_list() { //выевсти массив
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void resize_array() { //изменить размер
    int new_size;
    scanf("%d", &new_size);

    if (new_size == 0) {
        free(arr);
        arr = NULL;
        size = 0;
        capacity = 2;
        arr = (int*)malloc(capacity * sizeof(int));

    } else if (new_size > size) {
        int *arr2 = (int*)realloc(arr, new_size * sizeof(int));
        arr = arr2;
        for (int i = size; i < new_size; i++) {
            arr[i] = 0;
        }
        capacity = new_size;
        size = new_size;

    } else if (new_size < size) {
        size = new_size;
        int *arr2 = (int*)realloc(arr, size * sizeof(int));
        arr = arr2;
        capacity = size;
    }
}

void show_info() { // для красоты чтобы было
    printf("количество элементов: %d\n", size);
    printf("емкость массива: %d\n", capacity);
    printf("используется памяти: %d байт\n", size * (int)sizeof(int));
    printf("выделено памяти: %d байт\n", capacity * (int)sizeof(int));
}

void exit_program() { // чтобы было
    printf("До свидания!\n");
    free(arr);
    exit(0);
}

int main() {
    arr = (int*)malloc(capacity* sizeof(int));
    struct MenuItem menu[] = {
        {1, "добавить элемент", add_element},
        {2, "удалить элемент", delete_element},
        {3, "вывести список", print_list},
        {4, "изменить размер массива", resize_array},
        {5, "информация о списке", show_info},
        {0, "выход", exit_program}
    };

    int menu_size = sizeof(menu) / sizeof(menu[0]);
    int choice;

    while (1) {
        for (int i = 0; i < menu_size; i++) {
            printf("%d. %s\n", menu[i].key, menu[i].description);
        }
        printf("ваш выбор: ");
        scanf("%d", &choice);
        int found = 0;
        for (int i = 0; i < menu_size; i++) {
            if (menu[i].key == choice) {
                menu[i].function();
                found = 1;
                break;
            }
        }
        if (!found && choice != 0) {
            printf("неверный выбор\n");
        }
    }
    
    return 0;
}