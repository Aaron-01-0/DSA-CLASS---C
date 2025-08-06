#include <stdio.h>   // for printf() and scanf()
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time() function to seed the random generator


int main() {
    int arr[1000];
    int n = 1000;

    // Seed the random number generator
    srand(time(0));

    printf("Randomly generated 1000 numbers:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;  // Random numbers between 0 and 9999
        printf("%d ", arr[i]);
    }

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("\n\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
