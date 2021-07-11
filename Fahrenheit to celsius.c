#include <stdio.h>

void main()
{
    float celsius, farhenheit;

    printf("Enter temperature in Farhenheit: ");
    scanf("%f",&farhenheit);
    celsius=(farhenheit-32)*5/9;
    printf("%f Fahrenheit = %f Celsius \n", farhenheit,celsius);
}
