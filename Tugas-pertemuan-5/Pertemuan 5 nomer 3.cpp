#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya_parkir;
    printf("Masukkan jam masuk: ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jam_keluar);
    lama_parkir = jam_keluar - jam_masuk;
    if (lama_parkir <= 2) {
        biaya_parkir = 2000;
    } else {
        biaya_parkir = 2000 + (lama_parkir - 2) * 500;
    }
    printf("Biaya parkir: %d\n", biaya_parkir);
    return 0;
}
