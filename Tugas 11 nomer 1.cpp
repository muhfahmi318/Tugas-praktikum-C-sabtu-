#include <stdio.h>
#define SIZE 12 // ukuran array

int main() {
  // deklarasi array A, B, C dan variabel lainnya
  int A[SIZE] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
  int B[SIZE], C[SIZE];
  int i, j = 0, k = 0;
  int sum = 0, avg = 0;

  // menghitung rata-rata nilai mahasiswa dari array A
  for (i = 0; i < SIZE; i++) {
    sum += A[i];
  }
  avg = sum / SIZE;

  // memeriksa isi array A dan memindahkan nilainya ke array B atau C
  for (i = 0; i < SIZE; i++) {
    if (A[i] > avg) {
      B[j] = A[i];
      j++;
    } else {
      C[k] = A[i];
      k++;
    }
  }

  // menampilkan isi array A, B dan C
  printf("Isi array A adalah: \n");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");

  printf("Isi array B adalah: \n");
  for (i = 0; i < j; i++) {
    printf("%d ", B[i]);
  }
  printf("\n");

  printf("Isi array C adalah: \n");
  for (i = 0; i < k; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  printf("Rata-rata nilai mahasiswa adalah: %d\n", avg);

  return 0;
}
