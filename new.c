#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14159;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area of the circle
    area = pi * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
