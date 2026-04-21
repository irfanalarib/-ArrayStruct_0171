#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    int nama;
    float alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "Nomer Mahasiswa= ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa = ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa = ";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa = ";
    cin >> mhs.umur;
}