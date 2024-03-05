// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Motorcycle.cpp"
#include <vector>

// Deklarasi namespace
using namespace std;

/*
    Kelas ParkingLot yang digunakan untuk merepresentasikan data garasi parkir
*/
class ParkingLot {
private:
    // Atribut yang digunakan pada kelas ParkingLot terdiri dari kapasitas dan jumlah kendaraan saat ini
    int kapasitas;
    int jumlah_kendaraan_saat_ini;
    vector<Motorcycle> dataMotor;

public:
    // Constructor
    ParkingLot() {
        // Default constructor
    }

    // Constructor : Overloading
    ParkingLot(int kapasitas) {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = 0; // Initialize jumlah kendaraan saat ini to 0
    }

    // Constructor : Overloading
    ParkingLot(int kapasitas, int jumlah_kendaraan_saat_ini) {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
    }

    // Method setter untuk set nilai setiap atribut pada kelas ParkingLot
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    void setJumlahKendaraanSaatIni(int jumlah_kendaraan_saat_ini) {
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
    }

    void setDataMotor(Motorcycle dataMotor) {
        this->dataMotor.push_back(dataMotor);
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
    int getKapasitas() {
        return kapasitas;
    }

    int getJumlahKendaraanSaatIni() {
        return jumlah_kendaraan_saat_ini;
    }

    vector<Motorcycle> getDataMotor() {
        return dataMotor;
    }

    // Destructor
    ~ParkingLot() {
        // Destructor implementation (if needed)
    }
};
