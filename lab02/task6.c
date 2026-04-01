#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

enum DataType {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR
};

struct TaggedData
{
    union Data value;
    enum DataType type;
};


int main() {
    union Data data;
    data.i = 67;
    printf("data.i = %d\n", data.i);
    printf("data.f = %.1f\n", data.f);
    printf("data.c = '%c'\n", data.c);

    data.f = 6.7;
    printf("data.i = %d\n", data.i);
    printf("data.f = %.1f\n", data.f);
    printf("data.c = '%c'\n", data.c);

    data.c = 'N';
    printf("data.i = %d\n", data.i);
    printf("data.f = %.1f\n", data.f);
    printf("data.c = '%c'\n", data.c);

    struct TaggedData data1, data2, data3;
    data1.value.i = 52;
    data1.type = TYPE_INT;

    data2.value.f = 5.2;
    data2.type = TYPE_FLOAT;
    
    data3.value.c = 'D';
    data3.type = TYPE_CHAR;

    printf("%d\n", data1.value.i);
    printf("%.1f\n", data2.value.f);
    printf("%c\n", data3.value.c);

    return 0;
}