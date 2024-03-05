// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Motorcycle yang digunakan untuk merepresentasikan data Motor
*/
class Motorcycle : public Vehicle {
private:
    // Atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor dan kapasitas tangki
    string jenis_motor;
    int kapasitas_tangki;

public:
    // Constructor
    Motorcycle() {
        // Default constructor
    }

    // Constructor : Overloading
    Motorcycle(string jenis_motor) {
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = 0; // Initialize fuel tank capacity to 0
    }

    // Constructor : Overloading
    Motorcycle(string jenis_motor, int kapasitas_tangki) {
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = kapasitas_tangki;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Motorcycle
    void setJenis(string jenis_motor) {
        this->jenis_motor = jenis_motor;
    }

    void setKapasitas(int kapasitas_tangki) {
        this->kapasitas_tangki = kapasitas_tangki;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    string getJenis() {
        return jenis_motor;
    }

    int getKapasitas() {
        return kapasitas_tangki;
    }

    // Destructor
    ~Motorcycle() {
        // Destructor implementation (if needed)
    }
};
