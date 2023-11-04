/*

Author Info
===================
Nilanjan B. Mitra
04 November 2023
2023IMG-039
ABV-IIITM

*/

#include <stdio.h>
#include <string.h>
#include <time.h>

typedef char* string;
string valid[] = {"selection", "bubble", "insertion"};

void sortHandler(int algoIndex);
void searchHandler(int arr[], int size);
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
int binarySearch(int arr[], int left, int right, int element);
void printArr(int arr[], int size, string message);

int main (int argc, char *argv[]) {
    // Printing Author Info
    printf("Author Info\n");
    printf("===================\n");
    printf("Nilanjan B. Mitra\n");
    printf("04 November 2023\n");
    printf("2023IMG-039\n");
    printf("ABV-IIITM\n\n\n");

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

    searchHandler(arr, size);

    return;
}

void searchHandler(int arr[], int size)
{
    int element;
    printf("\nEnter element to search for in the sorted array: ");
    scanf("%d", &element);

    int index = binarySearch(arr, 0, size - 1, element);
    if (index == -1) { printf("Element %d cannot be found in the sorted array.\n", element); }
    else { printf("Element %d is at index %d in the sorted array.\n", element, index); }

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


int binarySearch(int arr[], int left, int right, int element)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == element) { return mid; }
        if (arr[mid] > element) { return binarySearch(arr, left, mid - 1, element); }
        return binarySearch(arr, mid + 1, right, element);
    }
    return -1;
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