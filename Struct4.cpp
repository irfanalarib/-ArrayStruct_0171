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
    Mahasiswa mhs[3];
    for (int i =0; i < 3; i++)
    {
        cout << "Data Mahasiswa Ke-" << (i+1) ":" << endl;
        cout << "Nomer Mahasiswa= ";
        getline(cin, mhs[i].NIM);
        cout << "Nama Mahasiswa = ";
        getline(cin, mhs[i].nama);
        cout << "Alamat Mahasiswa = " << endl;
        cout << "\t Nama Desa : ";
        cin >> mhs[i].alamat.desa; 
        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa = ";
        cin >> mhs[i].umur;
    }
        

    for (int i =0; i < 3; i++)
    {
    cout << endl;
    
    cout << "Data Mahasiswa Ke-" << (i+1) ":" << endl;
    cout << "\n NIM = " << mhs[i].nim << endl;
    cout << "\n Nama = " << mhs[i].nama << endl;
    cout << "\n Alamat = ";
    cout << "\t Desa = " << mhs[i].alamat.desa << endl;
    cout << "\t Kota = " << mhs[i].alamat.kota << endl;
    cout << "\n Umur = " << mhs[i].umur << endl;
    }

    return 0;
}