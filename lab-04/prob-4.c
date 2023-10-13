#include <stdio.h>

int main () {
    int size;
    int unique_count = 0;
    printf("How many elements would you like in the array: ");
    scanf("%i", &size);
    
    int array[size];
    int unique[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element at index %d: ", i);
        scanf("%d", &array[i]);

        if (i == 0)
        {
            unique[unique_count] = array[i];
            unique_count++;
        }
        else
        {
            int j = 0;
            while (j < i)
            {
                if (array[i] == array[j])
                {
                    break;
                }

                if (j == i - 1 && array[i] != array[j])
                {
                    unique[unique_count] = array[i];
                    unique_count++;
                    break;
                }
                j++;
            }
        }
    }

    int occurrences[unique_count];
    for (int k = 0; k < unique_count; k++)
    {
        occurrences[k] = 0;
        for (int l = 0; l < size; l++)
        {
            if (unique[k] == array[l])
            {
                occurrences[k]++;
            }
        }
    }

    printf("\n");
    for (int m = 0; m < unique_count; m++)
    {
        printf("Number of occurrences of %d is %d\n", unique[m], occurrences[m]);
    }

    return 0;
}