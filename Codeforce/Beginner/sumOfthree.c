#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n < 3) {
            printf("NO\n");
        } else if (n % 3 == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("1 2 %d\n", n - 3);
        }
    }

    return 0;
}