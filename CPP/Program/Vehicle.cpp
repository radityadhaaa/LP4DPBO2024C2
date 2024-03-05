// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

/*
    Kelas Vehicle yang digunakan untuk merepresentasikan data kendaraan
*/
class Vehicle {
private:
    // Atribut yang digunakan pada kelas Vehicle terdiri dari plat nomor, merk, tahun produksi, dan warna
    string plat_nomor;
    string merk;
    int tahun_produksi;
    string warna;

public:
    // Constructor
    Vehicle() {
        // Default constructor
    }

    // Constructor : Overloading
    Vehicle(string plat_nomor, string merk, int tahun_produksi, string warna) {
        this->plat_nomor = plat_nomor;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        this->warna = warna;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Vehicle
    void setPlatNomor(string plat_nomor) {
        this->plat_nomor = plat_nomor;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setTahunProduksi(int tahun_produksi) {
        this->tahun_produksi = tahun_produksi;
    }

    void setWarna(string warna) {
        this->warna = warna;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    string getPlatNomor() {
        return plat_nomor;
    }

    string getMerk() {
        return merk;
    }

    int getTahunProduksi() {
        return tahun_produksi;
    }

    string getWarna() {
        return warna;
    }

    // Destructor
    ~Vehicle() {
        // Destructor implementation (if needed)
    }
};
