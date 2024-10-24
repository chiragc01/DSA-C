#include <stdio.h>

int main() {
    int pos = 4;  // Position where the number will be inserted (0-based index)
    int no = 10;  // Number to insert
    int arr[7] = {1, 2, 3, 4, 5, 9};  // Original array, last element uninitialized
    int n = 6;  // Number of elements in the array

    // Shift elements to the right from the position pos
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = no;  // Insert 'no' at position 'pos'

    n++;  // Increment n to reflect the new size of the array

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
