#include <stdio.h>

int main() {
    int A[];
    int i, j = 0;
    for (i = 0; i < 11; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0) {
            A[j] = A[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

