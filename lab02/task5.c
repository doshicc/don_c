#include <stdio.h>

enum Day {
    MONDAY,     
    TUESDAY,   
    WEDNESDAY, 
    THURSDAY,   
    FRIDAY,    
    SATURDAY,  
    SUNDAY    
};

int main() {
    enum Day today = WEDNESDAY;
    printf("%d\n", today);
    switch (today) {
        case MONDAY:
            printf("Понедельник\n");
            break;
        case TUESDAY:
            printf("Вторник\n");
            break;
        case WEDNESDAY:
            printf("Среда\n");
            break;
        case THURSDAY:
            printf("Четверг\n");
            break;
        case FRIDAY:
            printf("Пятница\n");
            break;
        case SATURDAY:
            printf("Суббота\n");
            break;
        case SUNDAY:
            printf("Воскресенье\n");
            break;
        default:
            printf("Неизвестный день\n");
    }
    
    return 0;
}
