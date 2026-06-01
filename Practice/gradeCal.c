#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Grade: A+\n");
    }
    else if (marks >= 70) {
        printf("Grade: A\n");
    }
    else if (marks >= 60) {
        printf("Grade: A-\n");
    }
    else if (marks >= 50) {
        printf("Grade: B\n");
    }
    else if (marks >= 40) {
        printf("Grade: C\n");
    }
    else if (marks >= 33) {
        printf("Grade: D\n");
    }
    else if (marks >= 0) {
        printf("Grade: F\n");
    }
    else {
        printf("Invalid Marks\n");
    }

    return 0;
}