#include <stdio.h>

void printHead(int w);
void printBody(int w, int h);

void main() {
    int width, height;

    scanf("%d %d", &width, &height);

    printHead(width);
    printBody(width, height);
    printHead(width);
}

void printHead(int w) {
    int i;
    for (i = 0; i < w; i++) {
        printf("* ");
    }
    printf("\n");
}

void printBody(int w, int h) {
    int i, j;

    /* พิมพ์ body เพียง 1 แถว เมื่อ h = 3 */
    for (i = 0; i < h - 2; i++) {
        printf("*");

        for (j = 0; j < w * 2 - 3; j++) {
            printf(" ");
        }

        printf("*\n");
    }
}
