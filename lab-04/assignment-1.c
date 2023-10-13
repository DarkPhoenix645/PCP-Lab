#include <stdio.h>

int main () {
    int size;
    printf("How many elements would you like in the array: ");
    scanf("%i", &size);
    
    int array[size];
    int neg = 0, zero = 0, pos = 0;
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", &array[i]);

        if (array[i] < 0) { neg++; }
        else if (array[i] = 0) { zero++; }
        else { pos++; }
    }
    
    printf("Negative: %d, Zero: %d, Positive: %d\n", neg, zero, pos);
    return 0;
}
