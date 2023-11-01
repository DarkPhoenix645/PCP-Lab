/*

Author Info
===================
Nilanjan B. Mitra
01 November 2023
2023IMG-039
ABV-IIITM

*/

#include <stdio.h>
#include <string.h>
#include <time.h>

typedef char* string;
string valid[] = {"selection", "bubble", "insertion"};

void sortHandler(int algoIndex);
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
void printArr(int arr[], int size, string message);

int main (int argc, char *argv[]) {
    if (argc != 2)
    {
        printf("Invalid Usage\n");
        printf("Please use the following format:\n");
        printf("\n");
        printf("\t./search <algorithm-to-be-used>\n");
        printf("\n");
        printf("Valid algorithms:\n");
        printf("\t1. selection \n\t2. bubble \n\t3. insetion\n");
        return 1;
    }
    else
    {
        string algo = argv[1];
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(algo, valid[i]) && i == 2) 
            {
                if (i < 2) { continue; }
                printf("Invalid Usage\n");
                printf("Please use the following format:\n");
                printf("\n");
                printf("\t./search <algorithm-to-be-used>\n");
                printf("\n");
                printf("\tValid algorithms:\n");
                printf("\t\t1. selection \n\t\t2. bubble \n\t\t3. insetion\n");
                return 1;
            }
            else if (!strcmp(algo, valid[i]))
            {
                printf("%s sort will be demonstrated\n", algo);
                sortHandler(i);
                break;
            }
        }
    }
    return 0;
}

void sortHandler(int algoIndex)
{
    int size;
    printf("Number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int j = 0; j < size; j++)
    {
        printf("Element at index %i: ", j);
        scanf("%d", &arr[j]);
    }

    printArr(arr, size, "Input Array");

    // For measuring the compute time of sorting algorithm used
    clock_t time; 
    time = clock(); 

    switch (algoIndex)
    {
        case 0:
            selectionSort(arr, size);
            break;

        case 1:
            bubbleSort(arr, size);
            break;

        case 2:
            insertionSort(arr, size);
            break;
        
        default:
            break;
    }

    time = clock() - time; 
    double time_taken_ms = 1000 * (((double) time) / CLOCKS_PER_SEC);

    printArr(arr, size, "Sorted Array");
    printf("\nPerformance Report\n");
    printf("======================\n");
    printf("Size of input array: %i\n", size);
    printf("Algorithm used: %s\n", valid[algoIndex]);
    printf("Time taken (ms): %.4f\n", time_taken_ms);

    return;
}


void selectionSort(int arr[], int size)
{
    for (int a = 0; a <= size - 1; a++)
    {
        int min = a;
        for (int b = a; b <= size - 1; b++)
        {
            if (arr[b] < arr[min]) { min = b; }
        }

        int temp = arr[a];
        arr[a] = arr[min];
        arr[min] = temp;
    }
    
    return;
}

void bubbleSort(int arr[], int size)
{
    int counter = 0;
    for (int a = 0; a <= size - 1; a++)
    {
        for (int b = 0; b <= size - counter - 2; b++)
        {
            if (arr[b] > arr[b + 1])
            {
                int temp = arr[b + 1];
                arr[b + 1] = arr[b];
                arr[b] = temp;
            }
        }
        counter++;
    }
    
    return;
}

void insertionSort(int arr[], int size)
{
    for (int a = 0; a <= size - 1; a++)
    {
        int b = a;
        while (b > 0 && arr[b] < arr[b - 1])
        {
            int temp = arr[b - 1];
            arr[b - 1] = arr[b];
            arr[b] = temp;
            b--;
        }
    }

    return;
}

void printArr(int arr[], int size, string message)
{
    printf("%s: { ", message);
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("}\n");

    return;
}