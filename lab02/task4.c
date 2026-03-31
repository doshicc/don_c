#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

float calculateSqare(struct Rectangle rect) {
    return rect.width * rect.height;
}

float calculatePerimeter(struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}

int main() {
    struct Rectangle rect = {5.2, 6.7};
    printf("Ширина: %.1f\n", rect.width);
    printf("Высота: %.1f\n", rect.height);

    printf("Площадь: %.2f\n", calculateSqare(rect));
    printf("Периметр: %.2f\n", calculatePerimeter(&rect));

    return 0;
}
