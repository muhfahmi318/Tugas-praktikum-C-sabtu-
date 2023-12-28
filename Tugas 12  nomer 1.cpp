#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char A[8] = "JAKARTA";
    bool found = false;

    for (int i = 0; i < strlen(A); i++) {
        for (int j = i + 1; j < strlen(A); j++) {
            if (A[i] == A[j]) {
                cout << "ADA" << endl;
                cout << "Huruf yang sama adalah " << A[i] << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}

