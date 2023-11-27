/*
// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
 
// Driver program to test above functions
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
// This code is contributed by shivanisinghss2110
*//*
#include <stdio.h>
 
static void sort(void)
{
    // TODO: add bubble sort algorithm here
}
 
int main()
{
    return 0;
}
*/
#include <stdio.h> 
 
#define MAX_LEN 100
 
static void swap(int *x, int *y)
{ 
    int tmp = *x; 
    *x = *y; 
    *y = tmp; 
} 
 
static void bubble_sort(int *array, int len)
{ 
    int i, j;
 
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1; j++)  
            if (array[j] > array[j + 1]) 
                swap(&array[j], &array[j + 1]); 
}
 
static void print_array(int *array, int len)
{
    int i;
 
    for (i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
 
int main()
{
    int array[MAX_LEN], len, i;
 
    printf("What's the length of the array? Maximum lenght is %d\n", MAX_LEN);
    scanf("%d", &len);
 
    printf("Gimme the %d elements\n", len);
    for (i = 0; i < len; i++) {
    scanf("%d", &array[i]);
    }
 
    printf("Nonsorted array: ");
    print_array(array, len);
 
    bubble_sort(array, len);
 
    printf("Sorted array: ");
    print_array(array, len);
 
    return 0; 
} 
