#include <stdio.h>
#define PI 3.1415
void main() {
    float area, radius, circumf;
    printf("Enter radius of circle");
    scanf("%f", &radius);
    area = radius * radius * PI;
    circumf = 2 * PI * radius;
    printf("\nArea of circle = %f", area);
    printf("\ncirm of circle = %f", circumf);
}