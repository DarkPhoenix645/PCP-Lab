#include <stdio.h>

int main() 
{
    int size;
    printf("How many elements would you like in the array: ");
    scanf("%i", &size);
    
    int array[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", &array[i]);
    }

    int max = array[0], min = array[0];
    
    for (int i = 0; i < size; i++)
    {
        max = array[i] > max ? array[i] : max;
        min = array[i] < min ? array[i] : min;
    }
    
    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}