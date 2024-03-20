#include <stdio.h>

int main() {
    double salary, tax;

    // Read the salary input
    scanf("%lf", &salary);

    // Check if the salary is tax-free
    if (salary <= 2000.00) {
        printf("Isento\n");
    } else {
        // Calculate the tax
        if (salary <= 3000.00) {
            tax = (salary - 2000.00) * 0.08;
        } else if (salary <= 4500.00) {
            tax = 1000.00 * 0.08 + (salary - 3000.00) * 0.18;
        } else {
            tax = 1000.00 * 0.08 + 1500.00 * 0.18 + (salary - 4500.00) * 0.28;
        }

        // Print the tax amount
        printf("R$ %.2lf\n", tax);
    }

    return 0;
}
