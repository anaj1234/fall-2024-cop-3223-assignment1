#include <stdio.h>
#include <math.h>

// Global variables for coordinates
double coordX1, coordY1, coordX2, coordY2;

// Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function to call all the required functions
int main(int argc, char **argv) {
    calculateDistance();  
    calculatePerimeter(); 
    calculateArea();      
    calculateWidth();     
    calculateHeight();    

    return 0; 
}

// Function to calculate distance between two points
double calculateDistance() {
    // Input points
    printf("Enter the coordinates for Point #1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &coordX1, &coordX2);
    
    printf("Enter the coordinates for Point #2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &coordY1, &coordY2);
    
    // Calculate the distance with distance formula
    double distance = sqrt(pow(coordX2 - coordX1, 2) + pow(coordY2 - coordY1, 2));

    // Print results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", coordX1, coordY1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", coordX2, coordY2);
    printf("The distance between the two points is %.3f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter 
double calculatePerimeter() {
    // Using distance function for basic calculations
    double width = fabs(coordX2 - coordX1);  
    double height = fabs(coordY2 - coordY1);
    
    // Calculate perimeter
    double perimeter = 2 * (width + height);

    // Print results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", coordX1, coordY1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", coordX2, coordY2);
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);
    
    return 2.0;  // Difficulty rating 
}
// Function to calculate the area 
double calculateArea() {
    // Using distance function 
    double width = fabs(coordX2 - coordX1);
    double height = fabs(coordY2 - coordY1);
    
    // Calculate area
    double area = width * height;

    // Print results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", coordX1, coordY1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", coordX2, coordY2);
    printf("The area of the city encompassed by your request is %.3f\n", area);
    
    return 3.0;  // Difficulty rating 
}

// Function to calculate width 
double calculateWidth() {
    double width = fabs(coordX2 - coordX1);

    // Print results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", coordX1, coordY1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", coordX2, coordY2);
    printf("The width of the city encompassed by your request is %.3f\n", width);

    return 2.0;  // Difficulty rating 
}

// Function to calculate height 
double calculateHeight() {
    double height = fabs(coordY2 - coordY1);

    // Print results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", coordX1, coordY1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", coordX2, coordY2);
    printf("The height of the city encompassed by your request is %.3f\n", height);

    return 2.0;  // Difficulty rating 
}
