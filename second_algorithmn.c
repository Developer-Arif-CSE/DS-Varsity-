#include <stdio.h>

int main() {
    int i, n, p, a[100];

    printf("\nEnter The Range Of The Array:");
    scanf("%d", &n);

    printf("\nEnter The Elements Of The Array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Added missing "&" to store input in a[i]
    }

    printf("\nAfter Traversing:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Added space for better readability
    }

    printf("\nEnter The Position To Insert:");
    scanf("%d", &p);

    if (p < 0 || p > n) {
        printf("\nInsert Is Impossible:\n");
    } else {
        for (i = n - 1; i >= p; i--) {
            a[i + 1] = a[i];
        }
        printf("\nEnter The Element To Insert:");
        scanf("%d", &a[p]);
        n++;
    }

    printf("\nAfter Inserting:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }

    return 0;
}
