#include <stdio.h>

int main() 
{
    // Fahrenheit --> Celsius conversion
    int fahrenheit, celsius;
    printf("Please enter the temp in Fahrenheit: ");
    scanf("%i", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("Temp in celsius: %i\n", celsius);
    return 0;
}