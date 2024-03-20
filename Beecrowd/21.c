#include <stdio.h>

int main() {
    int banknotes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double value;
    int i, notes, count;

    scanf("%lf", &value);
    printf("NOTAS:\n");

    for (i = 0; i < 6; i++) {
        notes = banknotes[i];
        count = value / notes;
        printf("%d nota(s) de R$ %.2f\n", count, notes * 1.00);
        value -= count * notes;
    }

    printf("MOEDAS:\n");

    for (i = 0; i < 6; i++) {
        double coinValue = coins[i];
        count = value / coinValue;
        printf("%d moeda(s) de R$ %.2f\n", count, coinValue);
        value -= count * coinValue;
    }

    return 0;
}
