#include <iostream>
#include <utility>

using namespace std;

void bubbleSort(int arr[], int n);

int main()
{
    int arr[] = {1, 3, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    bubbleSort(arr, n);
    return 0;  // Best practice to include return statement
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;  // Clearer variable name
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;  // Set true if a swap happens
            }
        }
        if (!swapped)  // If no swaps, array is already sorted
        {
            break;
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;  // Optional: Add a newline for cleaner output
}
