#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNike = 350;

void input() {
    cout << "masukan jumlah Adidas = ";
    cin >> nAdidas;
    cout << "masukan jumlah Puma = ";
    cin >> nPuma;
    cout << "masukan jumlah New Balance = ";
    cin >> nNB;
    cout << "masukan jumlah Compass = ";
    cin >> nCompass;
    cout << "masukan jumlah Nike = ";
    cin >> nNike;
}

int totalHarga() {
    return (nAdidas * hAdidas) + (nPuma + hPuma) + (nNB * hNB) + (nNike * hNike);
}

void display() {
    cout << "Jumlah Puma = " << nPuma << endl;
    cout << "Jumlah Adidas = " << nAdidas << endl;
    cout << "Total harga = Rp. " << totalHarga << endl;
}

int main() {
    input();
    display();


}