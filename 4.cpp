#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNike = 350, hCompass = 150;

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

int totalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nCompass * hCompass) + (nNike * hNike);
}

void Display(){

    cout << endl;
    cout << "==============" << endl;
    cout << "Jumlah Puma = " << nPuma << endl;
    cout << "Jumlah Adidas = " << nAdidas << endl;
    cout << "Jumlah NB = " << nNB << endl;
    cout << "Jumlah Compass = " << nCompass << endl;
    cout << "Jumlah Nike = " << nNike << endl;
    cout << endl;
    cout << "Total Harga = Rp." << totalHarga() << endl;
}

int main() {

    input();
    Display();


}