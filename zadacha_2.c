#include <stdio.h>

int main() {
    int number;
    
    printf("Введите целое число: ");
    scanf("%d", &number);

    int isEven = (number % 2 == 0);

    printf("Число %d является %s\n", number, isEven ? "четным" : "нечетным");

    return 0;
}