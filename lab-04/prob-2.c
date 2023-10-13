#include <stdio.h>

int main() 
{
    int size;
    printf("Number of values whose average is to be calculated: ");
    scanf("%i", &size);
    
    int array[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    float sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    
    printf("Avg: %.2f\n", sum / (float) size);
    return 0;
}