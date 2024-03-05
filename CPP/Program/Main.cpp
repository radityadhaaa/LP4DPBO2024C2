// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include <vector>
#include "ParkingLot.cpp"
#include "Garage.cpp"
#include "Motorcycle.cpp"
#include "Car.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main()
{
    ios::sync_with_stdio(0); // Program belum selesai tidak akan melakukan print
    cin.tie();

    // Data 1 Motor
    Motorcycle dataMotor("Motor Bebek", 150);
    dataMotor.setPlatNomor("D 3124 DIT");
    dataMotor.setMerk("Honda");
    dataMotor.setJenis("Motor Bebek");
    dataMotor.setTahunProduksi(2022);
    dataMotor.setWarna("Putih");

    // Data ParkingLot 1
    ParkingLot kotaParkir(100, 5);
    kotaParkir.setDataMotor(dataMotor);

    // Data 1 Mobil
    Car dataMobil(6, 4);
    dataMobil.setPlatNomor("D 124 DIT");
    dataMobil.setMerk("Honda");
    dataMobil.setTahunProduksi(2022);
    dataMobil.setWarna("Abu");

    // Data Garage 1
    Garage garasi1("Budi Garasi", 1000);
    garasi1.setDataMobil(dataMobil);

    // Data 2 Motor
    dataMotor.setJenis("Motor Sport");
    dataMotor.setKapasitas(250);
    dataMotor.setPlatNomor("B 1234 ABC");
    dataMotor.setMerk("Yamaha");
    dataMotor.setJenis("Motor Sport");
    dataMotor.setTahunProduksi(2021);
    dataMotor.setWarna("Hitam");

    kotaParkir.setDataMotor(dataMotor);

    // Data 2 Mobil
    dataMobil.setJumlahKursi(4);
    dataMobil.setJumlahPintu(2);
    dataMobil.setPlatNomor("B 5678 DEF");
    dataMobil.setMerk("Toyota");
    dataMobil.setTahunProduksi(2020);
    dataMobil.setWarna("Merah");

    garasi1.setDataMobil(dataMobil);

    // Data 3 Motor
    dataMotor.setJenis("Motor Matic");
    dataMotor.setKapasitas(125);
    dataMotor.setPlatNomor("AB 9876 XYZ");
    dataMotor.setMerk("Suzuki");
    dataMotor.setJenis("Motor Matic");
    dataMotor.setTahunProduksi(2023);
    dataMotor.setWarna("Biru");

    kotaParkir.setDataMotor(dataMotor);

    // Data 3 Mobil
    dataMobil.setJumlahKursi(4);
    dataMobil.setJumlahPintu(2);
    dataMobil.setPlatNomor("AB 1234 WXY");
    dataMobil.setMerk("Daihatsu");
    dataMobil.setTahunProduksi(2023);
    dataMobil.setWarna("Hijau");

    garasi1.setDataMobil(dataMobil);

    // Data 4 Motor
    dataMotor.setJenis("Motor Trail");
    dataMotor.setKapasitas(450);
    dataMotor.setPlatNomor("CD 5678 RST");
    dataMotor.setMerk("Kawasaki");
    dataMotor.setJenis("Motor Trail");
    dataMotor.setTahunProduksi(2019);
    dataMotor.setWarna("Orange");

    kotaParkir.setDataMotor(dataMotor);

    // Data 4 Mobil
    dataMobil.setJumlahKursi(5);
    dataMobil.setJumlahPintu(4);
    dataMobil.setPlatNomor("CD 1234 UVW");
    dataMobil.setMerk("BMW");
    dataMobil.setTahunProduksi(2018);
    dataMobil.setWarna("Putih");

    garasi1.setDataMobil(dataMobil);

    // Data 5 Motor
    dataMotor.setJenis("Motor Custom");
    dataMotor.setKapasitas(500);
    dataMotor.setPlatNomor("EF 1234 GHI");
    dataMotor.setMerk("Harley Davidson");
    dataMotor.setJenis("Motor Custom");
    dataMotor.setTahunProduksi(2017);
    dataMotor.setWarna("Coklat");

    kotaParkir.setDataMotor(dataMotor);

    // Data 5 Mobil
    dataMobil.setJumlahKursi(2);
    dataMobil.setJumlahPintu(2);
    dataMobil.setPlatNomor("EF 5678 JKL");
    dataMobil.setMerk("Ferrari");
    dataMobil.setTahunProduksi(2024);
    dataMobil.setWarna("Kuning");

    garasi1.setDataMobil(dataMobil);

    vector<Motorcycle> tempParkirLot = kotaParkir.getDataMotor();
    // Menampilkan informasi Motor pada ParkingLot
    for (int i = 0; i < 5; i++)
    {
        cout << "Informasi Motor pada ParkingLot:" << endl;
        cout << "Plat Nomer Motor            : " << tempParkirLot[i].getPlatNomor() << endl;
        cout << "Merk Motor                  : " << tempParkirLot[i].getMerk() << endl;
        cout << "Jenis Motor                 : " << tempParkirLot[i].getJenis() << endl;
        cout << "Kapasitas Tangki Motor      : " << tempParkirLot[i].getKapasitas() << " CC" << endl;
        cout << "Tahun Produksi Motor        : " << tempParkirLot[i].getTahunProduksi() << endl;
        cout << "Warna Motor                 : " << tempParkirLot[i].getWarna() << endl;
        cout << "\n" << endl;
    }

    // Menampilkan informasi ParkingLot
    cout << "Informasi Kapasitas ParkingLot:" << endl;
    cout << "Kapasitas                   : " << kotaParkir.getKapasitas() << endl;
    cout << "Jumlah Kendaraan saat ini   : " << kotaParkir.getJumlahKendaraanSaatIni() << endl;
    cout << "\n" << endl;

    vector<Car> tempKendaraanMobil = garasi1.getDataMobil();

    // Menampilkan informasi Mobil
    for (int j = 0; j < 5; j++)
    {
        cout << "Informasi Mobil pada Garasi " << endl;
        cout << "Plat Nomer Mobil      : " << tempKendaraanMobil[j].getPlatNomor() << endl;
        cout << "Merk Mobil            : " << tempKendaraanMobil[j].getMerk() << endl;
        cout << "Jumlah Kursi Mobil    : " << tempKendaraanMobil[j].getJumlahKursi() << " Seat" << endl;
        cout << "Jumlah Pintu Mobil    : " << tempKendaraanMobil[j].getJumlahPintu() << " Pintu" << endl;
        cout << "Tahun Produksi Mobil  : " << tempKendaraanMobil[j].getTahunProduksi() << endl;
        cout << "Warna Mobil           : " << tempKendaraanMobil[j].getWarna() << endl;
        cout << "\n"  << endl;
    }

    // Menampilkan informasi Garasi
    cout << "Informasi Kapasitas Garage:" << endl;
    cout << "Nama Garasi           : " << garasi1.getNamaGarasi() << endl;
    cout << "Luas Garasi           : " << garasi1.getLuasGarasi() << " M" << endl;
    cout << "\n" << endl;

    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}
