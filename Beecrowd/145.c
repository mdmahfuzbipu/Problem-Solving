#include <stdio.h>

int main() {
    int line_num, y;
    scanf("%d %d", &line_num, &y);
    int temp_y = 1;
    while (temp_y <= y) {
        for (int i = 0; i < line_num; i++) {
            printf("%d", temp_y);
            temp_y += 1;
            if (i < line_num - 1) // there will be any space after the last element of each row 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}