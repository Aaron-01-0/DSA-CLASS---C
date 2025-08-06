#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {
        while (left <= high && arr[left] <= pivot) {
            left++;
        }
        while (right >= low && arr[right] > pivot) {
            right--;
        }
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[right];
    arr[right] = temp;

    quickSort(arr, low, right - 1);
    quickSort(arr, right + 1, high);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
    