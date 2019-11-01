#include <iostream>

using namespace std;

string tahun;
int fakultas, prodi;
string idtahun, idfakultas, idprodi, nomor, npm;

int main() {

    cout << "Masukan tahun: ";
    cin >> tahun;
    idtahun = tahun.substr(2, 3);

    inputfakultas:
        cout << "Fakultas:\n 1. Hukum\n 2. Pendidikan\n 3. Ilmu Kesehatan\n 4. Teknik\n";
    cout << "Masukan fakultas pilihan anda: ";
    cin >> fakultas;
    switch (fakultas) {
    case 1:
        idfakultas = "01";
        cout << "Program Studi:\n 1. Ilmu Humum S1\n";
        inputprodihukum:
            cout << "Masukan prodi pilihan anda: ";
        cin >> prodi;
        switch (prodi) {
        case 1:
            idprodi = "01";
            break;
        default:
            cout << "Pilihan tidak ada. Mohon ulangi dan masukan nomor sesuai dengan pilihan yang tersedia \n";
            goto inputprodihukum;
        }
        break;
    case 2:
        idfakultas = "02";
        inputprodipendidikan:
            cout << "Program Studi:\n 1. Bimbingan Konseling (S-1)\n 2. Pendidikan Guru PAUD (S-1) \n 3. Pendidikan Guru SD (S-1)\n";
        cout << "Masukan prodi pilihan anda: ";
        cin >> prodi;
        switch (prodi) {
        case 1:
            idprodi = "01";
            break;
        case 2:
            idprodi = "02";
            break;
        case 3:
            idprodi = "03";
            break;
        default:
            cout << "Pilihan tidak ada. Mohon ulangi dan masukan nomor sesuai dengan pilihan yang tersedia \n";
            goto inputprodipendidikan;
        }
        break;
    case 3:
        idfakultas = "03";
        inputprodikesehatan:
            cout << "Program Studi:\n 1. Ilmu Keperawatan (S-1)\n 2. Keperawatan (D-3)\n 3. Farmasi (D-3)\n 4. Profesi Ners\n";
        cout << "Masukan prodi pilihan anda: ";
        cin >> prodi;
        switch (prodi) {
        case 1:
            idprodi = "01";
            break;
        case 2:
            idprodi = "02";
            break;
        case 3:
            idprodi = "03";
            break;
        case 4:
            idprodi = "04";
            break;
        default:
            cout << "Pilihan tidak ada. Mohon ulangi dan masukan nomor sesuai dengan pilihan yang tersedia \n";
            goto inputprodikesehatan;
        }
        break;
    case 4:
        idfakultas = "04";
        inputproditeknik:
            cout << "Program Studi:\n 1. Teknik Industri (S-1)\n 2. Teknik Informatika (S-1)\n";
        cout << "Masukan prodi pilihan anda: ";
        cin >> prodi;
        switch (prodi) {
        case 1:
            idprodi = "01";
            break;
        case 2:
            idprodi = "02";
            break;
        default:
            cout << "Pilihan tidak ada. Mohon ulangi dan masukan nomor sesuai dengan pilihan yang tersedia \n";
            goto inputproditeknik;
        }
        break;
    default:
        cout << "Pilihan tidak ada. Mohon ulangi dan masukan nomor sesuai dengan pilihan yang tersedia \n";
        goto inputfakultas;
    }

    cout << "Masukan Nomor Urut: ";
    cin >> nomor;

    npm = idtahun + "." + idfakultas + "" + idprodi + "." + nomor;
    cout << "NPM: " << npm << "\n";
}
