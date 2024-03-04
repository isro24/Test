#include <iostream>
using namespace std;

int main() {
    int nBilangan;
    string status;
    srand(time(0));

    nBilangan = rand() % 10;
    cout << "Bilangannya adalah = " << nBilangan << endl;

    if (nBilangan % 2 == 0) {
        status = "Genap";
    }
    else {
        status = "Ganjil";
    }
    nBilangan = nBilangan + 1;

    cout << "Statusnya adalah " << status << endl;

    return 0;
}