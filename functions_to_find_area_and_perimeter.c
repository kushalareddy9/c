#include <stdio.h>
float calculate_area(float side) 
{
    return side * side;
}

float calculate_perimeter(float side) {
    return 4 * side;
}

int main() {
    float side_length;

    printf("Enter the side length of the square: ");
    scanf("%f", &side_length);

    float area = calculate_area(side_length);
    float perimeter = calculate_perimeter(side_length);

    printf("Area of the square: %.2f square units\n", area);
    printf("Perimeter of the square: %.2f units\n", perimeter);

    return 0;
}

