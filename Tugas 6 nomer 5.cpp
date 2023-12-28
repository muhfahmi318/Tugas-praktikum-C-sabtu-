#include <stdio.h>

int main() {
    int i;
    double balance = 1000000;
    double interest_rate = 0.02;
    for (i = 1; i <= 10; i++) {
        balance += balance * interest_rate;
    }
    printf("Jumlah uang setelah 10 bulan: Rp. %.2f", balance);
    return 0;
}

