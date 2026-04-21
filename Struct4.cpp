#include <iostream>
#include <string>
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

    cout << "Nomer Mahasiswa= ";
    getline(cin, mhs.NIM);
    cout << "Nama Mahasiswa = ";
    getline(cin, mhs.nama);
    cout << "Alamat Mahasiswa = " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa; 
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa = ";
    cin >> mhs.umur;

    cout << endl;

    cout << "\n NIM = " << mhs.nim << endl;
    cout << "\n Nama = " << mhs.nama << endl;
    cout << "\n Alamat = ";
    cout << "\t Desa = " << mhs.alamat.desa << endl;
    cout << "\t Kota = " << mhs.alamat.kota << endl;
    cout << "\n Umur = " << mhs.umur << endl;

    return 0;
}