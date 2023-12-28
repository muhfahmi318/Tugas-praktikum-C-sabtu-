#include <stdio.h>

int main() {
	// Deklarasi variabel
	int i, n = 10;
	
	// Perulangan untuk mencetak deret
	for (i = 1; i <= n; i++) {
		// Cetak angka yang merupakan kelipatan 10
		printf("%d ", i * 10);
	}
	
	// Cetak baris baru
	printf("\n");
	
	return 0;
}
