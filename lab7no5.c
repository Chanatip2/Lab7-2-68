#include <stdio.h>

long convert(long h, long m, long s);

int main(void) {
    long h, m, s;
    long totalSeconds;

    scanf("%ld %ld %ld", &h, &m, &s);

    totalSeconds = convert(h, m, s);

    printf("%ld\n", totalSeconds);

    return 0;
}

long convert(long h, long m, long s) {
    return (h * 3600) + (m * 60) + s;
}
