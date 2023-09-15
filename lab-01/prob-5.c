#include <stdio.h>

int main() 
{
    // Fahrenheit --> Celsius conversion
    float fahrenheit, celsius;
    printf("Please enter the temp in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.00) * (5/9.00);

    printf("Temp in celsius: %.2f\n", celsius);
    return 0;
}