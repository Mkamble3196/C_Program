#include <stdio.h>

int main() {
    int i, j;
    int height = 7;

    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == 0 || j == height - 1 || 
                (i == j && i <= height / 2) || 
                (i + j == height - 1 && i <= height / 2)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
