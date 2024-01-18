#include <stdio.h>

// Function untuk mengatur motor utama
void putarMotorUtama(int rpm, int waktu) {
    printf("Motor utama berputar dengan kecepatan %d rpm selama %d menit.\n", rpm, waktu);
}

// Function untuk mengatur motor pembuka klep
void putarMotorPembukaKlep(int waktu) {
    printf("Motor pembuka klep berputar selama %d menit.\n", waktu);
}

// Function untuk mendeteksi level kekeruhan air
int deteksiKekeruhanAir(int kekeruhan) {
    // Implementasi fuzzy logic untuk menentukan kecepatan motor utama
    if (kekeruhan <= 8) {
        return 1000; // rpm untuk kekeruhan rendah
    } else if (kekeruhan <= 30) {
        return 1200; // rpm untuk kekeruhan sedang
    } else {
        return 1500; // rpm untuk kekeruhan tinggi
    }
}

// Function untuk menjalankan mesin cuci
void jalankanMesinCuci(int kekeruhan) {
    printf("\nMesin cuci untuk level kekeruhan %d NTU:\n", kekeruhan);

    // Step 1: Motor pembuka klep pengisian air
    putarMotorPembukaKlep(2);

    // Step 2: Sensor turbidimeter untuk mendeteksi level kekeruhan air
    int kecepatanMotorUtama = deteksiKekeruhanAir(kekeruhan);

    // Step 3: Motor listrik utama
    putarMotorUtama(kecepatanMotorUtama, 60);

    // Step 4: Motor pembuka klep pembuangan air kotor
    putarMotorPembukaKlep(2);

    // Step 5: Motor listrik utama untuk mengeringkan cucian
    putarMotorUtama(2000, 3);

    // Step 6: Motor pembuka klep pengisian air
    putarMotorPembukaKlep(2);

    // Step 7: Motor listrik utama untuk sisa waktu mencuci
    putarMotorUtama(kecepatanMotorUtama, 60);

    // Step 8: Motor pembuka klep pembuangan air kotor
    putarMotorPembukaKlep(2);

    // Step 9: Motor listrik utama untuk mengeringkan cucian
    putarMotorUtama(2000, 3);
}

// Function utama
int main() {
    int levelKekeruhan;
    printf("Masukkan level kekeruhan air (6, 8, 12, 18, 24, 30, 36, 42, 49): ");
    scanf("%d", &levelKekeruhan);

    jalankanMesinCuci(levelKekeruhan);

    return 0;
}
