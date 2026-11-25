// ============================================================ 
// ACTIVITY 3: SIMULATING ABSTRACT CLASSES 
// Learning Outcome: Evaluate pure virtual functions 
// ============================================================

#include <stdio.h>

typedef struct Square Square;
typedef struct Circle Circle;

// Base Struct
typedef struct Shape {
    // THE ABSTRACT METHOD (like virtual double area() = 0;)
    // We declare the function pointer but do NOT assign it a function!
    double (*calculateArea)(void *derivedShape);
} Shape;

// Derived Struct 1
struct Square {
    Shape base;
    double side;
};

// Derived Struct 2
struct Circle {
    Shape base;
    double radius;
};

// --- Specific Implementations ---
// Notice they take void* so they can accept ANY shape, then cast it.
double squareArea(void *shapePtr);
double circleArea(void *shapePtr);

double squareArea(void *shapePtr) {
    Square *s = (Square *)shapePtr;
    return s->side * s->side;
}

double circleArea(void *shapePtr) {
    Circle *c = (Circle *)shapePtr;
    return 3.14159 * c->radius * c->radius;
}

int main(void) {
    // 1. Create a Square and ASSIGN its area function
    Square sq;
    sq.side = 5.0;
    sq.base.calculateArea = squareArea; // Filling the abstract slot!

    // 2. Create a Circle and ASSIGN its area function
    Circle circ;
    circ.radius = 3.0;
    circ.base.calculateArea = circleArea; // Filling the abstract slot!

    // 3. Call the functions
    // We pass the address of the derived struct (&sq, &circ)
    printf("Area of Square: %.2f\n", sq.base.calculateArea(&sq));
    printf("Area of Circle: %.2f\n", circ.base.calculateArea(&circ));

    return 0;
} 