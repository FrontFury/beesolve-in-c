//GCD = Greatest Common Divisor 
//LCM = Least Common Multiple

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    // Find LCM
    lcm = (num1 * num2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}