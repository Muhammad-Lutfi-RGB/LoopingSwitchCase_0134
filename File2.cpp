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
}