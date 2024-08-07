#include <stdio.h>

void hsquaremaker() {
    int a;

    printf("Enter the value a of square: ");
    scanf("%d", &a);
    printf("Here is the Square pattern of %d star.\n", a);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == a-1 || j == 0 || j == a-1) {
                printf("* ");
            }
            else {
                printf("  "); // double space
            }
        }
        printf("\n");
    }

    /*
    // MS
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("* ");
            if (i >= 1 && i < a-1) {
                while (j >= 0 && j < a-2) {
                    printf("  "); // double space
                    j++;
                }
            }
        }
        printf("\n");
    }
    */
}

void hrectanglemaker() {
    int a, b;

    printf("Enter the value a of rectangle: ");
    scanf("%d", &a);
    printf("Enter the value b of rectangle: ");
    scanf("%d", &b);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (i == 0 || i == a-1 || j == 0 || j == b-1) {
                printf("* ");
            }
            else {
                printf("  "); // double space
            }
        }
        printf("\n");
    }

    /*
    // MS
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("* ");
            if (i >= 1 && i < a-1) {
                while (j >= 0 && j < b-2) {
                    printf("  "); // double space
                    j++;
                }
            }
        }
        printf("\n");
    }
    */
}

int main()
{
    int x;
    
    printf("Enter the value of x.\n"
    "'0' for Hollow Square\n"
    "'1' for Hollow Rectangle\n"
    ": ");
    scanf("%d", &x);

    switch (x) {
        case 0:
            hsquaremaker();
            break;
        case 1:
            hrectanglemaker();
            break;
        default:
            printf("Invalid Input.\n");

    }
    return 0;
}