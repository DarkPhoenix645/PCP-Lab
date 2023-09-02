#include <stdio.h>

int main() 
{
    // Calculating gross salary after rent and allowance
    int salary;
    printf("Please enter the basic salary: ");
    scanf("%i", &salary);

    // 0.4 salary is dearness allowance while 0.2 salary is the rent
    salary -= 0.6 * salary;
    
    printf("Gross salary: %i\n", salary);
    return 0;
}