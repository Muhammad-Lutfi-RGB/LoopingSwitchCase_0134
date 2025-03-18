#include <iostream>
using namespace std;

float LuasPersegiPanjang(float x, float y) {
    return x * y;
}

float LuasLingkaran(float x) {
    return 3.14 * x * x;
}

int main() {
    int Pilihan;
    float Panjang, Lebar, Jejari;
    do{
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
        cout << "Masukkan Panjang : ";
        cin >> Panjang;
        cout << "Masukkan Lebar : ";
        cin >> Lebar;
        cout << "Luas Persegi Panjang = " << LuasPersegiPanjang(Panjang,Lebar) << endl;
        break;
    case 2 :
        cout << "Menghitung Luas Lingkaran" << endl;
        cout << "Masukkan Jari - Jari : ";
        cin >> Jejari;
        cout << "Luas Lingkaran = " << LuasLingkaran(Jejari) << endl;
        break;
    case 3 :
        break;

    default:
        cout << "Pilihan Anda Salah" << endl;
        break;
    }
    }while (Pilihan != 3);
}