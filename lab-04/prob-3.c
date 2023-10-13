#include <stdio.h>

void sort(int array[], int l, int r);
void merge(int array[], int l, int m, int r);
void print(int array[], int size);

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
    
    printf("Input array: ");
    print(array, size);

    sort(array, 0, size - 1);

    printf("Output array: ");
    print(array, size);

    return 0;
}

void sort(int array[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        sort(array, l, m);
        sort(array, m + 1, r);

        merge(array, l, m, r);
    }
}  

void merge(int array[], int l, int m, int r)
{
    int i, j, k;

    int n1 = m - l + 1;
    int n2 = r - m;
    int left_arr[n1];
    int right_arr[n2];

    for (i = 0; i < n1; i++) { left_arr[i] = array[l + i]; }
    for (j = 0; j < n2; j++) { right_arr[j] = array[m + j + 1]; }

    // Initial indices of left, right and merged arrays
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (left_arr[i] < right_arr[j]) 
        {
            array[k] = left_arr[i];
            i++;
        }
        else
        {
            array[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = left_arr[i];
        i++;
        k++;
    }
    
    while (j < n2)
    {
        array[k] = right_arr[j];
        j++;
        k++;
    }
}

void print(int array[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" ]\n");
}