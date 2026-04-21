#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "NIM Mahasiswa= ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa = ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa = " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa; 
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa = ";
    cin >> mhs.umur;

    cout << endl;

    cout << "\n NIM = " << mhs.Nim;
    cout << "\n Nama = " << mhs.nama;
    cout << "\n Alamat = ";
    cout << "\t Desa = " << mhs.alamat.desa;
    cout << "\t Kota = " << mhs.alamat.kota;
    cout << "\n Umur = " << mhs.umur;
}