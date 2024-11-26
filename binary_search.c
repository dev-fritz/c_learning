#include <stdio.h>

int binary_search(int array[], int array_size, int target) {
    int low = 0;
    int high = array_size - 1;
    
    printf("Low = %d, High = %d, array_size = %d\n\n", low, high, array_size);
    int count = 0;
    
    while (low <= high) {
        count++;
        int mid  = (low + high) / 2;
        int item = array[mid];
        
        if (item == target){
            printf("Tries = %d\n\n", count);
            return mid;
        }
        else if (item > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    printf("Steps = %d\n\n", count);
    return -1;
}

int main() {
    int array[]= {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5}; // array sorted
    int length = sizeof(array) / sizeof(array[0]); // array lenght
    int target;
    
    scanf("%d", &target);
    printf("Item index = %d\n",binary_search(array, length, target)); 
}