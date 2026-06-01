#include <stdio.h>

int main() {
    int favFood, choice;

    printf("1. Burger\n");
    printf("2. Pizza\n");
    printf("3. Mango Juice\n");
    printf("4. Milk Shake\n");
    printf("========================\n");
    printf("Enter Your Fav Food : ");
    scanf("%d", &favFood);

    if (favFood == 1) {
        printf("You Have Enough money for buying Burger ??\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("========================\n");
        printf("Choose One : ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Buy It\n");
        } else if (choice == 2) {
            printf("Tata Bye Bye.............\n");
        } else {
            printf("Invalid Input\n");
        }
    }
    else if (favFood == 2) {
        printf("You Have Enough money for buying Pizza ??\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("========================\n");
        printf("Choose One : ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Buy It\n");
        } else if (choice == 2) {
            printf("Tata Bye Bye, Basay giye khao.......\n");
        } else {
            printf("Invalid Input\n");
        }
    }
    else if (favFood == 3) {
        printf("You Have Enough money for buying Mango Juice ??\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("========================\n");
        printf("Choose One : ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Buy It\n");
        } else if (choice == 2) {
            printf("Tata Bye Bye.............\n");
        } else {
            printf("Invalid Input\n");
        }
    }
    else if (favFood == 4) {
        printf("You Have Enough money ??\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("========================\n");
        printf("Choose One : ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Buy It\n");
        } else if (choice == 2) {
            printf("Tata Bye Bye.............\n");
        } else {
            printf("Invalid Input\n");
        }
    }
    else {
        printf("Invalid Input\n");
    }

    return 0;
}