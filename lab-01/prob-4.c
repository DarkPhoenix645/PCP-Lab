#include <stdio.h>

int main() 
{
    // Calculating average marks
    int marks[] = {80, 85, 70, 75, 60};
    int arraySize = sizeof(marks) / sizeof(int);
    int total = 0;

    for (int i = 0; i < arraySize; i++)
    {
        total += marks[i];
    }
    
    printf("Average marks: %i\n", total / arraySize);
    return 0;
}