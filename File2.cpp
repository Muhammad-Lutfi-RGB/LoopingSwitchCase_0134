#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //perulangan while
    int x;
    int PerulanganWhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    x = rand() % 10;
    cout << "Perulangan While" << endl;
    cout << "Nilai X Awal; = " << x << endl;

    while (x < 7)
    {
        cout << "Nilai x = " << x << " Lari Keliling" << endl;
        x = rand() % 10;
        PerulanganWhile++;
    }

    cout << "Nilai X terakhir = " << x << endl;
    cout << "Jumlah Perulangan = " << PerulanganWhile << endl;
    
    //perulangan Do While
    cout << endl;
    cout << "Perulangan Do While " << endl;
    do
    {
        cout << "Nilai x = " << x << " Lari Keliling " << endl;
        x = rand() % 10;
        perulanganDo++;
    } while (x < 7);
    cout << "Nilai X Terakhir = " << x << endl;
    cout << "Jumlah Perulangan Do While = " << perulanganDo << endl;
}