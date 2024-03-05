// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Car yang digunakan untuk merepresentasikan data mobil
*/
class Car : public Vehicle{
private:
    // Atribut yang digunakan pada kelas Car terdiri dari jumlah kursi dan jumlah pintu
    int jumlah_kursi;
    int jumlah_pintu;

public:
    // Constructor
    Car() {
        // Default constructor
    }

    // Constructor : Overloading
    Car(int jumlah_kursi) {
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = 0; // Initialize jumlah pintu to 0
    }

    // Constructor : Overloading
    Car(int jumlah_kursi, int jumlah_pintu) {
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Car
    void setJumlahKursi(int jumlah_kursi) {
        this->jumlah_kursi = jumlah_kursi;
    }

    void setJumlahPintu(int jumlah_pintu) {
        this->jumlah_pintu = jumlah_pintu;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    int getJumlahKursi() {
        return jumlah_kursi;
    }

    int getJumlahPintu() {
        return jumlah_pintu;
    }

    // Destructor
    ~Car() {
        // Destructor implementation (if needed)
    }
};
