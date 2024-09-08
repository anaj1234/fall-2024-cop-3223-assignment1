#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

// Functions 
double calculateDistance();
double calculatePerimeter();
double calculateArea(); 
double calculateWidth();
double calculateHeight();

// Main function
int main() {
    // Call the functions 
    double diameter = calculateDistance();
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();

    return 0; 
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Ask the user to enter coordinates for Point 1
    printf("Enter the coordinates of Point 1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &x1, &x2);

    // Ask the user to enter coordinates for Point 2
    printf("Enter the coordinates of Point 2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &y1, &y2);

    // Calculate the distance (diameter of the circle)
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Print the results
    printf("The distance between the two points is %.2f\n", distance);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    return 2; //Difficulty rating
}

//Function to find perimeter 
double calculatePerimeter(){
    double x1, y1, x2, y2;

    // Ask the user to enter coordinates for Point 1
    printf("Enter the coordinates of Point 1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &x1, &x2);

    // Ask the user to enter coordinates for Point 2
    printf("Enter the coordinates of Point 2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &y1, &y2);

    // define distance in order to use it to find perimeter & do formula for perimeter  
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double perimeter = distance * M_PI;

    // Print the necessary messages 
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    return 2; //Difficulty rating
}

//Function to find area 
double calculateArea() {
    double x1, y1, x2, y2;

    // Ask the user to enter coordinates for Point 1
    printf("Enter the coordinates of Point 1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &x1, &x2);

    // Ask the user to enter coordinates for Point 2
    printf("Enter the coordinates of Point 2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &y1, &y2);

    // define distance in order to use it to find perimeter & do formula for area 
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double area = (distance/2)* (distance/2) * M_PI;

    // Print the necessary messages 
    printf("The area of the city encompassed by your request is %.2f\n", area);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    return 2; //Difficulty rating
}

//Function to calculate width
double calculateWidth(){
    double x1, y1, x2, y2;

     // Ask the user to enter coordinates for Point 1
    printf("Enter the coordinates of Point 1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &x1, &x2);

    // Ask the user to enter coordinates for Point 2
    printf("Enter the coordinates of Point 2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &y1, &y2);

    //Formula to find width
    double width = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    //Print message 
    printf("The width of the city encompassed by your request is %.2f\n", width);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    return 1; //Difficulty rating
}

//Function to find height 
double calculateHeight(){
    double x1, y1, x2, y2;

     // Ask the user to enter coordinates for Point 1
    printf("Enter the coordinates of Point 1 (x1 y1): Enter a value: ");
    scanf("%lf %lf", &x1, &x2);

    // Ask the user to enter coordinates for Point 2
    printf("Enter the coordinates of Point 2 (x2 y2): Enter a value: ");
    scanf("%lf %lf", &y1, &y2);

    //Formula to find height
    double height = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

     //Print message 
    printf("The height of the city encompassed by your request is %.2f\n", height);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    return 1; //Difficulty rating
}








   