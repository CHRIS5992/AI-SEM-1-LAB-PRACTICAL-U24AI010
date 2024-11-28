#include <stdio.h>

int main() {
    int x;
    int n;
    int y;

    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

 
    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + x / n; 
    } else if (n == 3) {
        y = 1 + x * n;
    } else if (n > 3 || n < 1) {
        y = 1 + n * x;
    } else {
        
        y = 0;  
    }


    printf("The value of Y(%d, %d) is: %d\n", x, n, y);

    return 0;
}
