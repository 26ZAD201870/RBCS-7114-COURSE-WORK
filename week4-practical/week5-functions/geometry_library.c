#include <stdio.h>

#define PI 3.14159

// FUNCTION 1: Area of Circle
double areaOfCircle(double radius) {
    return PI * radius * radius;
}

// FUNCTION 2: Area of Rectangle
double areaOfRectangle(double length, double width) {
    return length * width;
}

// FUNCTION 3: Area of Triangle
double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

// CHALLENGE 1: Area of Square
double areaOfSquare(double side) {
    return side * side;
}

// CHALLENGE 2: Perimeter of Rectangle
double perimeterOfRectangle(double length, double width) {
    return 2 * (length + width);
}

// FUNCTION 4: Display Menu
void displayMenu() {
    printf("\n===== GEOMETRY CALCULATOR =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Area of Square\n");
    printf("5. Perimeter of Rectangle\n");
    printf("6. Calculate All\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

// FUNCTION 5: Input Validation
double getPositiveNumber(char message[]) {
    double number;

    do {
        printf("%s", message);

        if (scanf("%lf", &number) != 1) {
            printf("Invalid input! Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            number = -1;
        }
        else if (number < 0) {
            printf("Error: Negative numbers are not allowed.\n");
        }

    } while (number < 0);

    return number;
}

// MAIN FUNCTION
int main() {

    int choice;

    double radius, length, width;
    double base, height, side;

    double circle, rectangle, triangle;
    double square, perimeter;

    do {

        displayMenu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice! Enter a number from 1 to 7.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            choice = 0;
            continue;
        }

        switch (choice) {

            case 1:
                radius = getPositiveNumber("Enter radius: ");

                circle = areaOfCircle(radius);

                printf("Area of circle: %.2f\n", circle);
                break;

            case 2:
                length = getPositiveNumber("Enter length: ");
                width = getPositiveNumber("Enter width: ");

                rectangle = areaOfRectangle(length, width);

                printf("Area of rectangle: %.2f\n", rectangle);
                break;

            case 3:
                base = getPositiveNumber("Enter base: ");
                height = getPositiveNumber("Enter height: ");

                triangle = areaOfTriangle(base, height);

                printf("Area of triangle: %.2f\n", triangle);
                break;

            case 4:
                side = getPositiveNumber("Enter side: ");

                square = areaOfSquare(side);

                printf("Area of square: %.2f\n", square);
                break;

            case 5:
                length = getPositiveNumber("Enter length: ");
                width = getPositiveNumber("Enter width: ");

                perimeter = perimeterOfRectangle(length, width);

                printf("Perimeter of rectangle: %.2f\n", perimeter);
                break;

            // CHALLENGE 4: CALCULATE ALL
            case 6:

                radius = getPositiveNumber("Enter radius: ");
                length = getPositiveNumber("Enter rectangle length: ");
                width = getPositiveNumber("Enter rectangle width: ");
                base = getPositiveNumber("Enter triangle base: ");
                height = getPositiveNumber("Enter triangle height: ");
                side = getPositiveNumber("Enter square side: ");

                circle = areaOfCircle(radius);
                rectangle = areaOfRectangle(length, width);
                triangle = areaOfTriangle(base, height);
                square = areaOfSquare(side);
                perimeter = perimeterOfRectangle(length, width);

                printf("\n===== ALL CALCULATIONS =====\n");

                printf("Area of circle: %.2f\n", circle);
                printf("Area of rectangle: %.2f\n", rectangle);
                printf("Area of triangle: %.2f\n", triangle);
                printf("Area of square: %.2f\n", square);
                printf("Perimeter of rectangle: %.2f\n", perimeter);

                break;

            case 7:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}