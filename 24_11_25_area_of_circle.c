#include <math.h>
#include <stdio.h>

int main() {
    int radius;
    const float PI = 3.14;
    float area, circumference;

    printf("Enter the radius of circle: ");
    scanf("%d", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("Perimeter of circle = %.2f\n", circumference);
    printf("Area of circle = %.2f", area);

    return 0;
}