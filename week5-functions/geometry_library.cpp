#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// CONSTANT: PI
const double PI = 3.14159;

// FUNCTION 1: Area of Circle
double areaOfCircle(double radius) {
    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
        return 0.0;
    }

    return PI * radius * radius;
}

// FUNCTION 2: Area of Rectangle
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        cout << "Error: Length and width cannot be negative." << endl;
        return 0.0;
    }

    return length * width;
}

// FUNCTION 3: Area of Triangle
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        cout << "Error: Base and height cannot be negative." << endl;
        return 0.0;
    }

    return 0.5 * base * height;
}

// CHALLENGE 1: Area of Square
double areaOfSquare(double side) {
    if (side < 0) {
        cout << "Error: Side cannot be negative." << endl;
        return 0.0;
    }

    return side * side;
}

// CHALLENGE 2: Perimeter of Rectangle
double perimeterOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        cout << "Error: Length and width cannot be negative." << endl;
        return 0.0;
    }

    return 2 * (length + width);
}

// FUNCTION: Display Menu
void displayMenu() {
    cout << "\n===== GEOMETRY CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Area of Square" << endl;
    cout << "5. Perimeter of Rectangle" << endl;
    cout << "6. Calculate All" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
}

// MAIN FUNCTION
int main() {
    int choice;

    double radius, length, width;
    double base, height, side;

    double area;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter radius: ";
                cin >> radius;

                if (radius < 0) {
                    cout << "Invalid input! Radius cannot be negative." << endl;
                } else {
                    area = areaOfCircle(radius);
                    cout << fixed << setprecision(2);
                    cout << "Area of circle: " << area << endl;
                }
                break;

            case 2:
                cout << "Enter length: ";
                cin >> length;

                cout << "Enter width: ";
                cin >> width;

                if (length < 0 || width < 0) {
                    cout << "Invalid input! Dimensions cannot be negative." << endl;
                } else {
                    area = areaOfRectangle(length, width);
                    cout << fixed << setprecision(2);
                    cout << "Area of rectangle: " << area << endl;
                }
                break;

            case 3:
                cout << "Enter base: ";
                cin >> base;

                cout << "Enter height: ";
                cin >> height;

                if (base < 0 || height < 0) {
                    cout << "Invalid input! Dimensions cannot be negative." << endl;
                } else {
                    area = areaOfTriangle(base, height);
                    cout << fixed << setprecision(2);
                    cout << "Area of triangle: " << area << endl;
                }
                break;

            case 4:
                cout << "Enter side: ";
                cin >> side;

                if (side < 0) {
                    cout << "Invalid input! Side cannot be negative." << endl;
                } else {
                    area = areaOfSquare(side);
                    cout << fixed << setprecision(2);
                    cout << "Area of square: " << area << endl;
                }
                break;

            case 5:
                cout << "Enter length: ";
                cin >> length;

                cout << "Enter width: ";
                cin >> width;

                if (length < 0 || width < 0) {
                    cout << "Invalid input! Dimensions cannot be negative." << endl;
                } else {
                    area = perimeterOfRectangle(length, width);
                    cout << fixed << setprecision(2);
                    cout << "Perimeter of rectangle: " << area << endl;
                }
                break;

            // CHALLENGE 4: Calculate All
            case 6:
                cout << "\nEnter radius: ";
                cin >> radius;

                cout << "Enter rectangle length: ";
                cin >> length;

                cout << "Enter rectangle width: ";
                cin >> width;

                cout << "Enter triangle base: ";
                cin >> base;

                cout << "Enter triangle height: ";
                cin >> height;

                cout << "Enter square side: ";
                cin >> side;

                if (radius < 0 || length < 0 || width < 0 ||
                    base < 0 || height < 0 || side < 0) {

                    cout << "\nInvalid input! All dimensions must be non-negative." << endl;

                } else {
                    cout << fixed << setprecision(2);

                    cout << "\n===== ALL CALCULATIONS =====" << endl;

                    cout << "Area of circle: "
                         << areaOfCircle(radius) << endl;

                    cout << "Area of rectangle: "
                         << areaOfRectangle(length, width) << endl;

                    cout << "Area of triangle: "
                         << areaOfTriangle(base, height) << endl;

                    cout << "Area of square: "
                         << areaOfSquare(side) << endl;

                    cout << "Perimeter of rectangle: "
                         << perimeterOfRectangle(length, width) << endl;
                }
                break;

            case 7:
                cout << "Goodbye! Thank you for using the Geometry Calculator." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}