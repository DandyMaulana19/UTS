#include <iostream>
#include <stdbool.h>

using namespace std;

string user, asal, tujuan, password, pesawat1;
char pilih;
int tanggal1, bulan1, penumpang, harga_tiket, total_harga_tiket;

void login(void);
void berangkat(void);
void maskapaiBerangkat(void);
void maskapaipulang(void);
void penumpang1(void);
void form(void);
void cetakTiket(void);
void alert(void);
// void alert2(void);

// void alert2()
// {
//     do
//     {
//         cout << "SILAHKAN MASUKKAN TANGGAL YANG BENAR!" << endl;
//         cin >> tanggal1;
//     } while (tanggal1 >= 31 && tanggal1 <= 0);
// }

void alert()
{
    do
    {
        cout << "Anda telah berhasil login, Ingin melanjutkan pemesanan? (y/n) " << endl;
        cin >> pilih;
    } while (pilih != 'n' && pilih != 'y');
}

void cetakTiket(string user, string pesawat1, string asal, string tujuan, int penumpang, int total_harga_tiket)
{
    cout << "================= T I K E T =================" << endl;
    cout << "Nama\t\t: " << user << endl;
    cout << "Maskapai\t: " << pesawat1 << endl;
    cout << "Asal\t\t: " << asal << endl;
    cout << "Tujuan\t\t: " << tujuan << endl;
    cout << "penumpang\t: " << penumpang << endl;
    cout << "Harga Tiket\t: Rp. " << total_harga_tiket << endl;
}

void penumpang1(int harga_tiket, string pesawat1, string user, string asal, string tujuan)
{

    cout << "Masukkan Jumlah Penumpang : ";
    cin >> penumpang;
    total_harga_tiket = (harga_tiket * penumpang);
    cetakTiket(user, pesawat1, asal, tujuan, penumpang, total_harga_tiket);
}

void maskapaiBerangkat(int tanggal, string user, string asal, string tujuan)
{
    if (tanggal1 % 2 == 0)
    {
    jadwal1:
        cout
            << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " ||  GARUDA  ||     09.00     ||   13.00  || Rp. 200.000 ||" << endl;
        cout << " || AIR ASIA ||     14.00     ||   17.00  || RP. 800.000 ||" << endl;
        cout << " ==========================================================" << endl;

        cout << "Pilih Maskapai : ";
        getline(cin >> ws, pesawat1);
        if (pesawat1 == "garuda" || pesawat1 == "Garuda" || pesawat1 == "GARUDA")
        {
            harga_tiket = 200000;
            penumpang1(harga_tiket, pesawat1, user, asal, tujuan);
        }
        else if (pesawat1 == "Air Asia" || pesawat1 == "air asia" || pesawat1 == "AIR ASIA")
        {
            harga_tiket = 800000;
            penumpang1(harga_tiket, pesawat1, user, asal, tujuan);
        }
        else
        {
            cout << "MASKAPAI TIDAK TERSEDIA, SILAHKAN PILIH KEMBALI !" << endl;
            goto jadwal1;
        }
    }
    else if (tanggal1 % 2 != 0)
    {
    jadwal2:
        cout << " ==========================================================" << endl;
        cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
        cout << " ==========================================================" << endl;
        cout << " ||  GARUDA  ||     09.00     ||   13.00  || Rp. 200.000 ||" << endl;
        cout << " ==========================================================" << endl;

        cout << "Pilih Maskapai : ";
        getline(cin >> ws, pesawat1);
        if (pesawat1 == "garuda" || pesawat1 == "Garuda" || pesawat1 == "GARUDA")
        {
            harga_tiket = 200000;
            penumpang1(harga_tiket, pesawat1, user, asal, tujuan);
        }
        else
        {
            cout << "MASKAPAI TIDAK TERSEDIA, SILAHKAN PILIH KEMBALI !" << endl;
            goto jadwal2;
        }
    }
};

void berangkat(int tanggal1, string user, string asal, string tujuan)
{
    // tanggal:
    cout << "Tanggal Berangkat : " << endl;
    cin >> tanggal1;
    if (tanggal1 <= 30 && tanggal1 >= 1)
    {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "1. November" << endl;
        cout << "2. Desember" << endl;
        cout << "Pilih Bulan : " << endl;
        cin >> bulan1;
        if (bulan1 == 1 || bulan1 == 2)
        {
            maskapaiBerangkat(tanggal1, user, asal, tujuan);
        }
        else
        {
            cout << "BULAN TIDAK TERSEDIA!" << endl;
            berangkat(tanggal1, user, asal, tujuan);
        }
    }
    else if (tanggal1 == 31)
    {
        cout << "BULAN YANG TERSEDIA : " << endl;
        cout << "Pilih Bulan:" << endl;
        cout << "1. Desember" << endl;
        cin >> bulan1;
        if (bulan1 == 1)
        {
            maskapaiBerangkat(tanggal1, user, asal, tujuan);
        }
        else
        {
            cout << "BULAN TIDAK TERSEDIA!" << endl;
            berangkat(tanggal1, user, asal, tujuan);
        };
    }
    else if (tanggal1 < 1 || tanggal1 > 31)
    {
        cout << "TANGGAL TIDAK TERSEDIA!" << endl;
        // berangkat(tanggal1, user, asal, tujuan);
        // alert2();
    }
    else
    {
        while (tanggal1 == false)
        {
            cout << "TANGGAL TIDAK TERSEDIA!" << endl;
            berangkat(tanggal1, user, asal, tujuan);
        }
    }
}

// void maskapaiPulang()
// {
//     if (tanggal1 % 2 == 0)
//     {
//         cout << " ==========================================================" << endl;
//         cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
//         cout << " ==========================================================" << endl;
//         cout << " || CITILINK ||     13.00     ||   17.00  || Rp. 200.000 ||" << endl;
//         cout << " || LION AIR ||     20.00     ||   00.00  || RP. 800.000 ||" << endl;
//         cout << " ==========================================================" << endl;

//         cout << "Pilih Maskapai : ";
//         cin >> pesawat1;
//     }
//     else if (tanggal1 % 2 != 0)
//     {
//         cout << " ==========================================================" << endl;
//         cout << " || MASKAPAI || JAM BERANGKAT || JAM TIBA ||    HARGA    ||" << endl;
//         cout << " ==========================================================" << endl;
//         cout << " || CITILINK ||     07.00     ||   11.00  || Rp. 200.000 ||" << endl;
//         cout << " ==========================================================" << endl;

//         cout << "Pilih Maskapai : ";
//         cin >> pesawat1;
//     }
// }

void form(char pilih, string user)
{
    if (pilih == 'y' || pilih == 'Y')
    {
        cout << "Silahkan isi form dibawah ini!" << endl;
        cout << "Asal : ";
        getline(cin >> ws, asal);
    tujuan1:
        cout << "Tujuan :";
        getline(cin >> ws, tujuan);
        if (tujuan == asal)
        {
            cout << "SILAHKAN MASUKKAN TUJUAN YANG LAIN!" << endl;
            goto tujuan1;
        }
        // tanggal:
        // if (tanggal1 == false)
        // {
        //     cout << "SILAHKAN MASUKKAN TANGGAL DENGAN BENAR !";
        //     goto tanggal;
        // }
        berangkat(tanggal1, user, asal, tujuan);
    }
    else if (pilih == 'n' || pilih == 'N')
    {
        cout << "TERIMAKASIH TELAH MAMPIR!" << endl;
    }
}

void login()
{
    cout << "APLIKASI PEMESANAN TIKET PESAWAT" << endl
         << endl;
    cout << "Masukkan Username : ";
    getline(cin >> ws, user);
    cout << "Masukkan Password : ";
    getline(cin >> ws, password);

    cout << "Halo " << user << " Selamat Datang !" << endl;
    alert();
    form(pilih, user);
}
int main()
{
    login();
    return 0;
}