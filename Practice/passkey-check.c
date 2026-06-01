#include <stdio.h>
#include <string.h>

int main() {
    char passkey[] = "121212";
    char guess[100];

    while (1) {
        scanf("%s", guess);

        if (strcmp(guess, passkey) == 0) {
            printf("YES!! Permission Granted\n");
            break;
        } else {
            printf("NO!! Permission Denied\n");
        }
    }

    return 0;
}