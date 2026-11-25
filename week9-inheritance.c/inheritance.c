// ============================================================ 
// ACTIVITY 1: SIMULATING INHERITANCE IN C 
// Learning Outcome: Apply inheritance using struct embedding 
// ============================================================ 
#include <stdio.h> 
#include <string.h> 
// ------------------------------------------------------------ 
// BASE STRUCT (Parent) 
// ------------------------------------------------------------ 
struct ShapeBase { 
char color[20]; 
}; 
// ------------------------------------------------------------ 
// DERIVED STRUCT (Child) 
 
// ------------------------------------------------------------ 
struct CircleShape { 
    // THE TRICK: We place the base struct as the FIRST member. 
    // This allows a Circle* to be safely cast to a Shape*. 
    struct ShapeBase base;  
     
    double radius; 
}; 
 
int main() { 
    // 1. Create a Circle 
    struct CircleShape myCircle; 
     
    // 2. Initialize the "inherited" data 
    // Notice we have to go through 'base' to get to color. 
    strcpy(myCircle.base.color, "Red"); 
     
    // 3. Initialize the Circle's unique data 
    myCircle.radius = 5.0; 
 
    // 4. Display the information 
    printf("Circle Color (Inherited): %s\n", myCircle.base.color); 
    printf("Circle Radius (Specific): %.2f\n", myCircle.radius); 
 
    return 0; 
} 