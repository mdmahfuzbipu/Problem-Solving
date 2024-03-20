#include <stdio.h>

int main() {
    int x, y, z, temp;

    scanf("%d %d %d", &x, &y, &z);

    // Sort the input numbers in ascending order
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    // Output the sorted numbers in ascending order
    printf("%d\n%d\n%d\n\n", x, y, z);

    // Output the original numbers in the order they were read
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
