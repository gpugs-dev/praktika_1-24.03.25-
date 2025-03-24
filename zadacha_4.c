#include <stdio.h>

int main() {
    int n;

    printf("Введите целое число: ");
    scanf("%d", &n);

    int dvoika = (n > 0) && ((n & (n - 1)) == 0;

    printf("%d\n", dvoika);

    return 0;
}