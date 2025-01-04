#include <stdio.h>

int main(){
    const float PI = 3.14;
    float radius ;
    printf("enter radius of circle:");
    scanf("%f", &radius);
    float circumference = PI * radius * 2;
    float  area = PI * radius * radius;
    printf("Circle area is %.2f\n",area);
    printf("radius of circle is %.2f\n",circumference);
}