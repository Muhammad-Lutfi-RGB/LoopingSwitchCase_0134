#include <iostream>
using namespace std;

int main() {
    int Pilihan;
    
    cout << "===Menu===" << endl;
    cout << "1. Menghitung Luas Persegi" << endl;
    cout << "2. Menghitung Luas Lingkaran" << endl;
    cout << "3. Exit" << endl;
    cout << "Pilih (1/2/3) : ";
    cin >> Pilihan;

    switch (Pilihan)
    {
    case 1 :
        cout << "Menghitung Luas Persegi Panjang" << endl;
        break;
    case 2 :
        cout << "Menghitung Luas Lingkaran" << endl;
    case 3 :
        break;

    default:
        cout << "Pilihan Anda Salah" << endl;
        break;
    }
}