#include <stdio.h>

int main() {
    int a, minIndex, temp;

    printf("Enter Number Of Elements: ");
    scanf("%d", &a);
    int b[a];

    
    for (int i = 0; i < a; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\nUnsorted Array:\n");
    for (int i = 0; i < a; i++) {
        printf("%d\n", b[i]);
    }

    
    for (int i = 0; i < a - 1; i++) {
        minIndex = i; 
        for (int j = i + 1; j < a; j++) {
            if (b[j] < b[minIndex]) {
                minIndex = j; 
            }
        }
        
        if (minIndex != i) {
            temp = b[i];
            b[i] = b[minIndex];
            b[minIndex] = temp;
        }
    }

    printf("\nSorted Array:\n");
    for (int i = 0; i < a; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}
