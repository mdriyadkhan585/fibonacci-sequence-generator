#include <stdio.h>

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    
    printf("\nFibonacci Sequence up to %d terms:\n", n);
    printf("%d, %d", t1, t2);
    
    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n\n");
}

int main() {
    int n;

    printf("====================================\n");
    printf("     Fibonacci Sequence Generator   \n");
    printf("====================================\n");

    printf("Enter the number of terms you want to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nPlease enter a positive integer.\n\n");
    } else {
        generateFibonacci(n);
    }

    printf("====================================\n");
    printf("           Program Ended            \n");
    printf("====================================\n");

    return 0;
}
