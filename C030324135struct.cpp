#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[])
{
    mahasiswa Ibnu;
    mahasiswa *ptrIbnu = &Ibnu; //Menggunakan struktur berbasis pointer

    cout << "Isikan Data Anda: \n"; //Menggunakan struktur berbasis pointer
    cout << "NIM : "; //Menggunakan struktur berbasis pointer
    cin >> ptrIbnu->nim; //Menggunakan struktur berbasis pointer
    cout << "Nama : "; //Menggunakan struktur berbasis pointer
    cin >> ptrIbnu->nama; //Menggunakan struktur berbasis pointer
    cout << "Alamat : "; //Menggunakan struktur berbasis pointer
    cin >> ptrIbnu->alamat; //Menggunakan struktur berbasis pointer
    cout << "IPK : "; //Menggunakan struktur berbasis pointer
    cin >> ptrIbnu->ipk; //Menggunakan struktur berbasis pointer
    system("cls");
    cout << "Data Anda: \n"; //Menggunakan struktur berbasis pointer
    cout << "NIM = " << ptrIbnu->nim << "\n"; //Menggunakan struktur berbasis pointer
    cout << "Nama = " << ptrIbnu->nama << "\n"; //Menggunakan struktur berbasis pointer
    cout << "Alamat = " << ptrIbnu->alamat << "\n"; //Menggunakan struktur berbasis pointer
    cout << "IPK = " << ptrIbnu->ipk << "\n"; //Menggunakan struktur berbasis pointer
    return 0;
}