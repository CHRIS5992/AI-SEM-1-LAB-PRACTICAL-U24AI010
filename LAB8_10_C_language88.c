#include <stdio.h>

int main() {
    int array[5], array2[5];
    
    // Input values for the first array
    printf("Enter Values of Array 1: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    
    // Pointers to the arrays
    int *array1ptr = array;
    int *array2ptr = array2;

    // Copy elements in reverse order
    for(int i = 0; i < 5; i++) {
        *(array2ptr + i) = *(array1ptr + (4 - i));  // Copying in reverse
    }
    
    
    printf("Elements of Array 2 in reverse order:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");  

    return 0;
}
