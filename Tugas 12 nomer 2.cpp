#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char A[11] = "JOGJAKARTA";
    int count[26] = {0};
    int max_count = 0;
    char max_char;

    for (int i = 0; i < strlen(A); i++) {
        count[A[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_char = i + 'A';
        }
    }

    cout << "Jumlah huruf terbanyak dalam array A adalah " << max_count << " dan huruf tersebut adalah " << max_char << "." << endl;

    return 0;
}

