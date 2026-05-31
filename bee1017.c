#include <stdio.h>

int main() {
    int T, V;
    double fuel;

    scanf("%d", &T);
    scanf("%d", &V);

    fuel = (T * V) / 12.0;

    printf("%.3lf\n", fuel);

    return 0;
}