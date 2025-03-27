#include <stdio.h>

int main() {
    int number;
    
    printf("Введите целое число: ");
    scanf("%d", &number);

    // проверка на то, делится ли число на 2 без остатка
    int isEven;
    if (number % 2 == 0) {
        isEven = 1; // 1 означает "четное"
    } else {
        isEven = 0; // 0 означает "нечетное"
    }

    // вывод результата
    if (isEven) {
        printf("Число %d является четным\n", number);
    } else {
        printf("Число %d является нечетным\n", number);
    }

    return 0;
}
