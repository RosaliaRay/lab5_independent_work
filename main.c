/*
    Студент: Мареева Ангелина Ильинична
    Группа: ПИ 11
    Назначение: Стаатистика последовательности
*/

#include <stdio.h>

int main(void) {
    int x;
    int count = 0;
    int positives = 0;
    long long sum = 0;

    while (1) {
        int rc = scanf("%d", &x);
        if (rc != 1) {
            printf("Ошибка ввода: ожидалось целое число.\n");
            break;
        }
        if (x == 0) {
            break;
        }
        if (x < -1000 || x > 1000) {
            printf("Ошибка диапазона: число %d вне диапазона [-1000; 1000].\n", x);
            continue;
        }
        count++;
        sum += x;
        if (x > 0) {
            positives++;
        }
        if (count == 100) {
            break;
        }
    }

    printf("Количество: %d\n", count);
    printf("Сумма: %lld\n", sum);
    printf("Положительных: %d\n", positives);

    return 0;
}
