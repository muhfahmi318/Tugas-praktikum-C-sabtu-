#include <stdio.h>

int main() {
    char jenis;
    double harga, diskon;

    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis);
    
    printf("Masukkan harga: ");
    scanf("%lf", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis barang tidak valid\n");
            return 1;
    }

    double harga_diskon = harga - (harga * diskon);
    printf("Jenis barang %c mendapat diskon = %d%%, Harga setelah didiskon = %.2lf\n", jenis, (int)(diskon * 100), harga_diskon);

    return 0;
}
