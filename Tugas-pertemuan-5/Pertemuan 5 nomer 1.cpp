#include <iostream>
using namespace std;

int main() {
    int jam_masuk, jam_keluar, lama_bekerja;
    cout << "Masukkan jam masuk: ";
    cin >> jam_masuk;
    cout << "Masukkan jam keluar: ";
    cin >> jam_keluar;
    if (jam_keluar > jam_masuk) {
        lama_bekerja = jam_keluar - jam_masuk;
    } else {
        lama_bekerja = 12 - jam_masuk + jam_keluar;
    }
    cout << "Lama bekerja: " << lama_bekerja << " jam" << endl;
    return 0;
}
