#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    a = b = c = 0;
    printf("Please enter the coefficient of x^2: ");
    scanf("%f", &a);

    printf("Please enter the coefficient of x: ");
    scanf("%f", &b);

    printf("Please enter the constant term: ");
    scanf("%f", &c);

    float discriminant = (b * b) - (4 * a * c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("The given values do not constitute a quadratic equation!\n");
        return 0;
    }
    
    if (discriminant < 0)
    {
        discriminant *= -1;
        float root1 = sqrt(discriminant) / (2.00 * a);
        float root2 = sqrt(discriminant) / (2.00 * a);
        float non_root = (-1.00 * b) / (2.00 * a);

        printf("\n", non_root, root1);
        printf("Root 1: %f + (%f)i\n", non_root, root1);
        printf("Root 2: %f + (%f)i\n", non_root, root2);
        return 0;
    }
    else 
    {
        float root1 = sqrt(discriminant) / (2.00 * a);
        float root2 = sqrt(discriminant) / (2.00 * a);
        float non_root = (-1.00 * b) / (2.00 * a);

        printf("\n", non_root, root1);
        printf("Root 1: %f + (%f)\n", non_root, root1);
        printf("Root 2: %f + (%f)\n", non_root, root2);
        return 0;
    }    
}