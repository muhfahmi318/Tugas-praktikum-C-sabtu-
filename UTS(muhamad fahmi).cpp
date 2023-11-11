#include <stdio.h>

int main() {
    int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int jumlah_ketebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);

    printf("Tombol Start ditekan.\n");
    printf("Motor listrik utama berputar 180 derajat.\n");

    for (int i = 0; i < jumlah_ketebalan; i++) {
        int nilai_tengah = ketebalan[i];
        printf("Ketebalan pengelasan: %d mm\n", nilai_tengah);

        printf("Motor listrik utama berputar dan berpindah pada titik nilai tengah.\n");
        printf("Motor listrik lengan tungkai berputar 45 derajat.\n");
        printf("Motor listrik jari robot mendekati objek yang akan dilas.\n");

        printf("Proses pengelasan berlangsung selama %d detik.\n", waktu[i]);

        printf("Pengelasan selesai pada ketebalan %d mm.\n", nilai_tengah);
        printf("\n");
    }

    return 0;
}
