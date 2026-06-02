#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter value of a: ");
    scanf("%lf", &a);

    printf("Enter value of b: ");
    scanf("%lf", &b);

    printf("Enter value of c: ");
    scanf("%lf", &c);

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two real roots:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);

    } else if (discriminant == 0) {
        double root = -b / (2 * a);

        printf("One real root:\n");
        printf("Root = %.2lf\n", root);

    } else {
        printf("No real roots\n");
    }

    return 0;
}