#include <stdio.h>

void squaremaker() {
    int a;

    printf("Enter the value a of square: ");
    scanf("%d", &a);
    printf("Here is the Square pattern of %d star.\n", a);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("* "); // without a space, that doesn't look like a square
        }
        printf("\n");
    }
}

void rectanglemaker() {
    int a, b;

    printf("Enter the value a of rectangle: ");
    scanf("%d", &a);
    printf("Enter the value b of rectangle: ");
    scanf("%d", &b);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("* ");
        }
        printf("\n");
    }

}

int main()
{
    int x;
    
    printf("Enter the value of x.\n"
    "'0' for Square\n"
    "'1' for Rectangle\n"
    ": ");
    scanf("%d", &x);

    switch (x) {
        case 0:
            squaremaker();
            break;
        case 1:
            rectanglemaker();
            break;
        default:
            printf("Invalid Input.\n");

    }
    return 0;
}