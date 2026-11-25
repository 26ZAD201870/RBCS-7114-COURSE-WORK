// ============================================================ 
// ACTIVITY 4: POLYMORPHIC DRAWING PROGRAM 
// Learning Outcome: Create a polymorphic application in C 
// ============================================================ 
#include <stdio.h> 
// Base Struct 
struct DrawingShape { 
// Function pointer for drawing 
void (*draw)(void); 
}; 
// Derived Structs 
struct Circle { 
struct DrawingShape base; 
}; 
struct Rectangle { 
struct DrawingShape base; 
}; 
struct Triangle { 
struct DrawingShape base; 
}; 
// --- Specific Draw Functions --- 
void drawCircle() { printf("Drawing a Circle ◯\n"); } 
void drawRectangle() { printf("Drawing a Rectangle ▭\n"); } 
void drawTriangle() { printf("Drawing a Triangle △\n"); }  
 
 
// A Polymorphic Function 
void renderCanvas(struct DrawingShape* shapePtr) { 
    // Call the function pointer 
    shapePtr->draw();  
} 
 
int main() { 
    // 1. Create the derived objects and initialize their function pointers 
    struct Circle c1; c1.base.draw = drawCircle; 
    struct Rectangle r1; r1.base.draw = drawRectangle; 
    struct Triangle t1; t1.base.draw = drawTriangle; 
    struct Circle c2; c2.base.draw = drawCircle; 
 
    // 2. Create an array of base struct pointers 
    // We cast the addresses of the derived structs to struct Shape* 
    struct DrawingShape* canvas[4]; 
    canvas[0] = (struct DrawingShape*)&c1; 
    canvas[1] = (struct DrawingShape*)&r1; 
    canvas[2] = (struct DrawingShape*)&t1; 
    canvas[3] = (struct DrawingShape*)&c2; 
 
    printf("--- Rendering Canvas ---\n"); 
     
    // 3. Loop through the canvas and draw everything 
    for (int i = 0; i < 4; i++) { 
renderCanvas(canvas[i]); 
} 
return 0; 
} 