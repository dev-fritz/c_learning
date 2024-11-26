#include <stdio.h>
#include <stdlib.h>

int smallest_element_index(int *array, int size) {
    int smallest = array[0];
    int smallest_idx = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            smallest_idx = i;
        }
    }

    return smallest_idx;
}

// remove element and realloc memory
int* remove_at_index(int *array, int size, int index) {
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    return realloc(array, (size - 1) * sizeof(int)); // resize array
}

int* selection_sort(int *array, int size) {
    int *new_array = (int *)malloc(size * sizeof(int));
    int *array_copy = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        array_copy[i] = array[i];
    }

    for (int i = 0; i < size; i++) {
        int smallest_idx = smallest_element_index(array_copy, size - i);
        new_array[i] = array_copy[smallest_idx];
        array_copy = remove_at_index(array_copy, size - i, smallest_idx);
    }

    free(array_copy); // delete array copy
    return new_array;
}

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array original:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int *sorted_array = selection_sort(array, size);

    printf("Array ordenado:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sorted_array[i]);
    }
    printf("\n");

    free(sorted_array); // delete sorted array
    return 0;
}
