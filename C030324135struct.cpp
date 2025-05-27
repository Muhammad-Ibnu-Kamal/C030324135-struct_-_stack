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
    mahasiswa *ptrIbnu = &Ibnu;

    cout << "Isikan Data Anda: \n";
    cout << "NIM : ";
    cin >> ptrIbnu->nim;
    cout << "Nama : ";
    cin >> ptrIbnu->nama;
    cout << "Alamat : ";
    cin >> ptrIbnu->alamat;
    cout << "IPK : ";
    cin >> ptrIbnu->ipk;
    system("cls");
    cout << "Data Anda: \n";
    cout << "NIM = " << ptrIbnu->nim << "\n";
    cout << "Nama = " << ptrIbnu->nama << "\n";
    cout << "Alamat = " << ptrIbnu->alamat << "\n";
    cout << "IPK = " << ptrIbnu->ipk << "\n";
    return 0;
}